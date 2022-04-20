#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#define SZ 80

int receive();

int menu();

int main(){
    int OP, ST;
    pid_t PID;
    PID = fork();

    if(PID == 0){
        printf("pid do filho %d",getpid());
        OP = menu();
        while(OP != 0){     // chama a função para execução do comando
            if(OP == 1){
                receive();
                OP = menu();
            } else{
                printf("INVALID OPTION!!!");
                OP = menu();
            }
        }
    } else if(PID < 0){
        printf("ERROR");
        exit(1);
    } else{
        printf("pid do Pai: %d\n", getpid());
        int ST;
        (void)waitpid(PID, &ST, 0);
    }
    return 0;
}

int receive(){
    char COMMAND[SZ];
    printf("\nENTER THE COMMAND:");
    setbuf(stdin,NULL);
    fgets(COMMAND, SZ, stdin);
    system(COMMAND);
};

int menu(){
    int OP = 0;
    printf("\nWANT TO RUN A COMMAND? (1 - YES | 0 - NO)\n");
    setbuf(stdin,NULL);
    scanf("%d",&OP);
    return OP;
};