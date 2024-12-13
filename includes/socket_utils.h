#ifndef _SOCKET_UTILS_H_
#define _SOCKET_UTILS_H_
#include <Winsock2.h>
#include <stdbool.h>

bool initialWinSocket();

void createClient(char *host, u_short port);

void createTcpServer(char *host, u_short port);

#endif