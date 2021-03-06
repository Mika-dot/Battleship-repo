#include "stdafx.h" // перешла из visual studio 2017
#pragma comment(lib, "ws2_32.lib") // сокеты и AF_INET
#include <winsock2.h> // библиотека сокетов
#include <iostream> // для консоли
#include <string> // строчки
#include <fstream> //для работы с файлами

using namespace std;

#pragma warning(disable: 4996) // без этого не работает AF_INET

SOCKET* Connections; // обявление глобального сокета
bool* flag; // обявление глобального флага


void ClientHandler_first() { // первый пользователь 
	ofstream f1;	//переменная f1 отвечает за запись в файл
	SOCKET newConnection_first; // переменая 1 пользователя (сокет)
	SOCKET newConnection_second; // переменая 2 пользователя (сокет)
	int time = 0;

	while (flag[1]) {
		Sleep(10); 
		time++;
		if (time == 1000)
		{
			WinExec("bot1.2.exe", SW_RESTORE);
		}
	} // ожидания 2 пользователя

	newConnection_first = Connections[0]; // запись в переменую 1 сокета 1 пользователя
	newConnection_second = Connections[1]; // запись в переменую 2 сокета 2 пользователя

	flag[1] = true; // флаг 2 пользователя снят 

	char Posts[255] = "t"; // отправка флага порядка игры
	char Nik[255]; // массив для сообщений

	send(newConnection_first, Posts, 255, NULL); // отправка сообщения превенства
	std::cout << "id " << newConnection_first << " ссоставил встречу с id " << newConnection_second << " евляется ведущие" << "\n"; // вывод соедениения в консоль
	f1.open("newConnection_first.txt");      //Открываем файл для записи
	f1 << "newConnection_first" << " - " << newConnection_second << "\n";   //Записываем в файл текст
	while (true)
	{
		recv(newConnection_first, Nik, 255, NULL); // прием сообщений
		std::cout << "id " << newConnection_first << " ссоставил встречу с id " << newConnection_second << " отправил сообщение " << Nik <<  "\n"; // вывод сообщения в консоль
		f1 << Nik << "\n"; // запись сообщения в файл
		send(newConnection_second, Nik, 255, NULL); // отправка сообщения по сокету
		
		//if (Nik[3] == '*') { // проверка сообщения на тригерный знак 
		//	break; // выход из цикла
		//}
	}


}

void ClientHandler_second() { // второй пользователь 
	ofstream f1;	//переменная f1 отвечает за запись в файл
	SOCKET newConnection_first; // переменая 1 пользователя (сокет)
	SOCKET newConnection_second; // переменая 2 пользователя (сокет)

	newConnection_first = Connections[0]; // запись в переменую 1 сокета 1 пользователя
	newConnection_second = Connections[1]; // запись в переменую 2 сокета 2 пользователя

	flag[0] = true; // флаг 1 пользователя снят 


	char Posts[255] = "f"; // отправка флага порядка игры
	char Nik[255]; // массив для сообщений

	
	send(newConnection_second, Posts, 255, NULL); // отправка сообщения второму
	std::cout << "id " << newConnection_second << " ссоставил встречу с id " << newConnection_first << " евляется ведомым" << "\n"; // вывод соедениения в консоль
	f1.open("newConnection_second.txt");      //Открываем файл для записи
	f1 << "newConnection_first" << " - " << newConnection_second << "\n";   //Записываем в файл текст
	while (true)
	{
		recv(newConnection_second, Nik, 255, NULL); // прием сообщений
		std::cout << "id " << newConnection_second << " ссоставил встречу с id " << newConnection_first << " отправил сообщение " << Nik << "\n"; // вывод сообщения в консоль
		f1 << Nik << "\n"; // запись сообщения в файл
		send(newConnection_first, Nik, 255, NULL); // отправка сообщения по сокету

		//if (Nik[3] == '*') { // проверка сообщения на тригерный знак 
		//	break; // выход из цикла
		//}
	}
}

void identifier() { // функция обработчик флага
	while (true)
	{
		if (flag[0] == false && flag[1] == false && flag[2] == false) { // если флаги пользователей открыты, то флаг записи на true
			flag[2] = true;
		}
		if (flag[0] && flag[1] && flag[2]) { // если флаги пользователей заняты, то новые ждут
			flag[2] = false;
		}
	}
}

int main(int argc, char* argv[]) {

	Connections = new SOCKET[2]; // обявление массива сокетов
	flag = new bool[3]; // массив флагов

	flag[0] = true; // флаг о наличии 1 человека
	flag[1] = true; // флаг о наличии 2 человека
	flag[2] = false; // запрет на работу с сокетами если есть 2 человека

	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)identifier, NULL, NULL, NULL); // запуск потока для проверки коректности работы флагов

	setlocale(LC_ALL, "Russian"); // подключение русского языка

	WSAData wsaData; // обьявление подключение (переменая)
	WORD DLLVersion = MAKEWORD(2, 1); // обьявление библиотеки MAKEWORD версии 2,1 -> 2,2 нету у меня 

	if (WSAStartup(DLLVersion, &wsaData) != 0) { // библеотека не найдена // инициирует использование Winsock DLL процессом
		std::cout << "Не может произойти соединения" << std::endl;
		exit(1); // выход
	}

	std::string line_ip_1;
	std::string line_ip_2;
	std::string line_ip_3;
	std::string line_ip_4;
	std::string line_port;

	ifstream f1_1("IP_1.txt");
	f1_1 >> line_ip_1;
	f1_1.close();
	ifstream f1_2("IP_2.txt");
	f1_2 >> line_ip_2;
	f1_2.close();
	ifstream f1_3("IP_3.txt");
	f1_3 >> line_ip_3;
	f1_3.close();
	ifstream f1_4("IP_4.txt");
	f1_4 >> line_ip_4;
	f1_4.close();

	ifstream f2("Port.txt");
	f2 >> line_port;
	f2.close();


	std::string IP; //<<  ip_1 <<  "." + ip_2 + "." + ip_3 + "." + ip_4;
	IP.append(line_ip_1);
	IP.append(".");
	IP.append(line_ip_2);
	IP.append(".");
	IP.append(line_ip_3);
	IP.append(".");
	IP.append(line_ip_4);

	char* cstr = new char[IP.length() + 1];
	strcpy(cstr, IP.c_str());

	int host = stoi(line_port);



	SOCKADDR_IN addr; // содержимое sockaddr выражается в сетевом порядке байтов
	int sizeofaddr = sizeof(addr); // инициализация длины принемаемых сообщений
	addr.sin_addr.s_addr = inet_addr(cstr); // инициализация ip пользователя
	addr.sin_port = htons(host); // обьявление порта номер
	addr.sin_family = AF_INET; // обявление типа подключения (типа библиотеки ) AF_INET // AF_INETэто семейство адресов, которое используется для обозначения типа адресов, с которыми может взаимодействовать ваш сокет (в данном случае это адреса Internet Protocol v4).

	SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL);  // формирования открыторго сокета // Функция сокета создает сокет, который привязан к определенному поставщику транспортных услуг.
	bind(sListen, (SOCKADDR*)&addr, sizeof(addr)); // Функция привязки связывает локальный адрес с сокетом.
	listen(sListen, SOMAXCONN); // Функция прослушивания переводит сокет в состояние, в котором он ожидает входящего соединения.

	SOCKET newConnection; // сокет для приема новых посетителей

	while (true) {

		newConnection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr); // ожедание нового посетителя в сокет и гео запись в newConnection

		if (newConnection == 0) { // новое подключение не может нормально работать
			std::cout << "Ошибка соединения с пользователем\n";
		}
		else {
			std::cout << "Клиент подключен!\n";

			while (flag[2]) { Sleep(10); } // если флаг 2 запрещающий работу закрыт то ожидаем

			if (flag[0]) { // если флаг 0 открыт (первого пользователя нету)
				flag[0] = false; // закрываем флаг первинца
				Connections[0] = newConnection; // записываем в массив новый сокет
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler_first, NULL, NULL, NULL); // обявления нового сокета
				/*
				NULL - дескриптор 
				NULL - Начальный размер стека в байтах
				(LPTHREAD_START_ROUTINE) - Указывает на функцию, которая уведомляет узел о начале выполнения потока. // ClientHandler_first - Указатель на функцию
				NULL - Указатель на переменную, которую нужно передать потоку.
				NULL - Флаги, управляющие созданием потока.
				NULL - Указатель на переменную, которая получает идентификатор потока.
				*/
				goto go;
			}
			if (flag[1]) { // если флаг 1 открыт (второго пользователя нету)
				flag[1] = false; // закрываем флаг второго
				Connections[1] = newConnection; // записываем в массив новый сокет
				CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler_second, NULL, NULL, NULL);
				/*
				NULL - дескриптор
				NULL - Начальный размер стека в байтах
				(LPTHREAD_START_ROUTINE) - Указывает на функцию, которая уведомляет узел о начале выполнения потока. // ClientHandler_second - Указатель на функцию
				NULL - Указатель на переменную, которую нужно передать потоку.
				NULL - Флаги, управляющие созданием потока.
				NULL - Указатель на переменную, которая получает идентификатор потока.
				*/
				goto go;
			}
		go: {}


		}
	}


	system("pause");
	return 0;
}