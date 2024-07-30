#include "socket_utils.h"


bool initialWinSocket(){
    //初始化WinSock
	WSADATA WSAData;
	if (WSAStartup(MAKEWORD(2,0), &WSAData) != 0)
	{
		return FALSE;
	}
    return TRUE;
}


void createClient(){
    struct sockaddr_in conn = {};
    char buf[4096] = {0};
    unsigned int iRemoteAdd = 0;
    int Sfd = 0;
    Sfd = socket(AF_INET, SOCK_STREAM, 0);
    printf("Sfd = %d\n",Sfd);
    if (0 > Sfd) {
        puts("create socket failed");
        return -1;
    }
    conn.sin_family = AF_INET;
    conn.sin_port = htons(9090);
    inet_pton(AF_INET,"127.0.0.1",&iRemoteAdd);
    conn.sin_addr.S_un.S_addr = iRemoteAdd;

    if(0 > connect(Sfd,(void*)&conn,sizeof(conn))){

    }else{

    }

}