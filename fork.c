#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo\n");
        execlp("hola.exe","hola.exe",NULL);
        sleep(5);
        printf("nunca nunca nunca");
    }else {
        printf("soy el proceso padre\n");
        wait(NULL);
    }
    return 0;
}