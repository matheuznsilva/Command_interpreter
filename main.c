#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#define SZ 80

void command();

int main(){
    int OP, ST;
    char COMMAND[SZ];
    pid_t PID;
    PID = fork();

    if(PID == 0){
        printf("PID DO FILHO %d\n",getpid());
        while(strcmp(COMMAND, "exit\n") != 0){     // chama a função para execução do comando
            command(&COMMAND);
        }
    } else if(PID < 0){
        printf("ERROR");
        exit(1);
    } else{
        printf("PID DO PAI: %d\n", getpid());
        int ST;
        (void)waitpid(PID, &ST, 0);
    }
    return 0;
}

void command(char *COMMAND){
    printf("\nCOMMAND $: ");
    setbuf(stdin,NULL);
    fgets(COMMAND, SZ, stdin);
    system(COMMAND);
};