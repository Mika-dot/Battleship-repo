
#pragma comment (lib, "ws2_32.lib")
#include <string>
#include <fstream>
#include <thread>
#include <iostream>
#include "winsock2.h"
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
using namespace std;

class Game {

public:
	struct Cell {
		bool Attacked = false;
		bool IsThereShip = false;
		int MainX = -1, MainY = -1;
		bool IsMain = false;
		int SizeLeft = 0;
		int ShipSize = 0;
	};
	Cell** Cells = new Cell * [10];
	Cell** BotCells = new Cell * [10];

	bool AlreadyChecked[4];

	void AlreadyCheckedClear() {
		for (int i = 0; i < 4; i++) AlreadyChecked[i] = false;
	}

	// Сервер
	WSADATA wsaData;
	SOCKET mysocket;
	sockaddr_in local_addr;
	SOCKET client_socket;
	sockaddr_in client_addr, dest_addr;
	int client_addr_size;
	//SOCKET my_sock;
	bool StartSERVER(int port) {
		try {
			WSAStartup(MAKEWORD(2, 2), &wsaData);
			mysocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			local_addr.sin_family = AF_INET;
			local_addr.sin_port = htons(port);
			local_addr.sin_addr.s_addr = 0;
			bind(mysocket, (sockaddr*)&local_addr, sizeof(local_addr));
			listen(mysocket, 0x100);
			client_addr_size = sizeof(client_addr);
		}
		catch (exception e)
		{
			string s = "Не удалось запустить сервер: ";
			s.assign(e.what());
			System::String^ s2 = gcnew System::String(s.c_str());
			System::Windows::Forms::MessageBox::Show(s2);
			delete s2;
			return false;
		}
		return true;
	}

	bool ConnectTo(System::String^ ip, int Port) {
		try {
			const char* IP = marshal_as<std::string>(ip).c_str();
			WSAStartup(MAKEWORD(2, 2), (WSADATA*)&wsaData);
			client_socket = socket(AF_INET, SOCK_STREAM, 0);
			dest_addr.sin_family = AF_INET;
			dest_addr.sin_port = htons(Port);
			HOSTENT* hst;
			if (inet_addr(IP) != INADDR_NONE)
				dest_addr.sin_addr.s_addr = inet_addr(IP);
			else {
				if (hst = gethostbyname(IP))
					((unsigned long*)&dest_addr.sin_addr)[0] = ((unsigned long**)hst->h_addr_list)[0][0];
				else
					return false;
			}
			connect(client_socket, (sockaddr*)&dest_addr, sizeof(dest_addr));
			//System::Windows::Forms::MessageBox::Show("ПОДКЛЮЧЕНО");
		}
		catch (exception e)
		{
			string s = "Не удалось подключиться: ";
			s.assign(e.what());
			System::String^ s2 = gcnew System::String(s.c_str());
			System::Windows::Forms::MessageBox::Show(s2);
			delete s2;
			return false;
		}
		return true;

	}

	void ServerAccept() {
		client_socket = accept(mysocket, (sockaddr*)&client_addr, &client_addr_size);
		//my_sock = ((SOCKET*)client_socket)[0];
		//HOSTENT* hst;
		//hst = gethostbyaddr((char*)&client_addr.sin_addr.s_addr, 4, AF_INET);
	}

	void CloseNET() {
		closesocket(client_socket);
		WSACleanup();
	}

	void Send(char c1, char c2, char c3) {
		char buff[3] = { c1,c2,c3 };
		send(client_socket, &buff[0], sizeof(buff), 0);
	}

	void Get(char &c1, char &c2, char &c3) {
		int br;
		char buff[3];
		if ((br = recv(client_socket, &buff[0], sizeof(buff), 0)) && br != SOCKET_ERROR)
			c1 = buff[0];
		else
			c1 = 15;

			c2 = buff[1];
			c3 = buff[2];
		/*
		while (true) {
			if ((br = recv(client_socket, &buff[0], sizeof(buff), 0))) {
				if (br == SOCKET_ERROR)
					c1 = 15;
				else
					c1 = buff[0];
				c2 = buff[1];
				c3 = buff[2];
			}
		}
		*/
		//System::Windows::Forms::MessageBox::Show("получено " + c1 + " " + c2 + " " + c3);
		//delete &buff;
	}

};