#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>

int main()
{
	int clientSocket;
	char str[255];
	struct sockaddr_in server_Address;
	socklen_t address_size;
	
	clientSocket = socket(AF_INET, SOCK_STREAM, 0);
	server_Address.sin_family = AF_INET;
	server_Address.sin_port = htons(2000);
	server_Address.sin_addr.s_addr = inet_addr("127.0.0.1");
	memset(server_Address.sin_zero, '\0', sizeof(server_Address.sin_zero));
	address_size = sizeof(server_Address);
	connect(clientSocket, (struct sockaddr *)&server_Address, address_size);

	recv(clientSocket, str, 255, 0);
	printf("Data received from server: %s", str);

	return 0;
}
