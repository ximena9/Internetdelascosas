#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void hola(int signalNum){
    printf("Recibí la señal %d", signalNum);
}

int main(){
    signal(12, hola);
    while(1){
        printf("trabajando\n");
        sleep(1);
    }
    return 0;
}