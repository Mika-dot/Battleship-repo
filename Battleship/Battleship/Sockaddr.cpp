#include "Sockaddr.h"
#include "stdafx.h"
#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>
#include <string> 
using namespace std;

#pragma warning(disable: 4996)

SOCKET Sockaddr::Server_socket(std::string ip_1, std::string ip_2, std::string ip_3, std::string ip_4, std::string hton) {

	std::string IP; //<<  ip_1 <<  "." + ip_2 + "." + ip_3 + "." + ip_4;
	IP.append(ip_1);
	IP.append(".");
	IP.append(ip_2);
	IP.append(".");
	IP.append(ip_3);
	IP.append(".");
	IP.append(ip_4);

	char* cstr = new char[IP.length() + 1];
	strcpy(cstr, IP.c_str());

	int host = stoi(hton);

	SOCKET Connection;
	setlocale(LC_ALL, "Russian");

	WSAData wsaData;
	WORD DLLVersion = MAKEWORD(2, 1);

	if (WSAStartup(DLLVersion, &wsaData) != 0) {
		std::cout << "Не может произойти соединения" << std::endl;
		exit(1);
	}

	SOCKADDR_IN addr;
	int sizeofaddr = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr(cstr); // "127.0.0.1"
	addr.sin_port = htons(host); // 1111
	addr.sin_family = AF_INET;

	Connection = socket(AF_INET, SOCK_STREAM, NULL);

	if (connect(Connection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
		std::cout << "Ошибка соединения с сервером\n";
		return 1;
	}


	return Connection;
	delete[] cstr;
}

char* Sockaddr::Writing_to_the_send_array(int X_old, int Y_old) {
	char* msg1 = new char[255];
	msg1[0] = '0' + (X_old / 100);
	msg1[1] = '0' + ((X_old % 100) / 10);
	msg1[2] = '0' + (X_old % 10);

	msg1[3] = '&';

	msg1[4] = '0' + (Y_old / 100);
	msg1[5] = '0' + ((Y_old % 100) / 10);
	msg1[6] = '0' + (Y_old % 10);

	return msg1;
	delete[] msg1;

}

char* Sockaddr::Repeat() {
	char* msg1 = new char[255];
	msg1[5] = '&';
	msg1[6] = '&';

	return msg1;
	delete[] msg1;
}

int Sockaddr::Unloading_from_an_array_x(char msg[]) {
	int x = 0;

	if (msg[0] != '0') {
		x += (msg[0] - '0') * 100;
	}
	x += (msg[1] - '0') * 10;
	x += (msg[2] - '0') * 1;


	return x;
}

int Sockaddr::Unloading_from_an_array_y(char msg[]) {
	int y = 0;

	if (msg[4] != '0') {
		y += (msg[4] - '0') * 100;
	}
	y += (msg[5] - '0') * 10;
	y += (msg[6] - '0') * 1;


	return y;
}
