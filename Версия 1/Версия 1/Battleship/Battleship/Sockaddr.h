#pragma once
#include "stdafx.h"
#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>

#pragma warning(disable: 4996)

ref class Sockaddr
{
private:

public:
	SOCKET Server_socket(std::string ip_1, std::string ip_2, std::string ip_3, std::string ip_4, std::string hton);
	char* Writing_to_the_send_array(int x, int y);
	int Unloading_from_an_array_x(char message[]);
	int Unloading_from_an_array_y(char message[]);
	char* Repeat();
};

