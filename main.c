#include <stdio.h>
#include <winsock2.h>
#include <conio.h>

int main() {
    WSADATA wd;
    WSAStartup(MAKEWORD(2, 2), &wd); //init socket usage

    SOCKET socket1 = socket(AF_INET, SOCK_STREAM, 0); //create a socket (ipv4, tcp, idk)

    SOCKADDR_IN sa; //connection preferences
        memset(&sa, 0 ,sizeof(sa));
        sa.sin_family = AF_INET;
        sa.sin_port = htons(1234);

    char ch;
    scanf("%c", &ch);

    if (ch == 'c') { //user
        sa.sin_addr.S_un.S_addr = inet_addr("127.0.0.1"); //local pc

        connect(socket1, (const struct sockaddr *) &sa, sizeof(sa));

//        int mes[] = {1, 34, 1};
//        send(socket1, mes, sizeof(mes), 0);
    }

    if (ch == 's'){ //server
        bind(socket1, (const struct sockaddr *) &sa, sizeof(sa));

//        int buf[5];
//        memset(buf, )

            SOCKET user_socket;
            SOCKADDR_IN user_addr;
            int user_addr_size = sizeof(user_addr);

        while (user_socket = accept(socket1, (struct sockaddr *) &user_addr, &user_addr_size)){
            printf("ok\n");

        }
    }

    closesocket(socket1);

    return 0;
}
