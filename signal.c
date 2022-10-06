#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void hola(int signalNum){
    printf("Recibí la señal %d", signalNum);
}

int cond;
void terminarWhile(int sigNumber){
    printf("Terminando while");
    cond = 0;
}

int main(){
    signal(12, terminarWhile);
    signal(2, hola);
    cond = 1;
    while(1){
        printf("trabajando\n");
        sleep(1);
    }
    printf(" Aqui nunca llega");
    return 0;
}