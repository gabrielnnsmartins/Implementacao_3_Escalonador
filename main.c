#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[100];
    int deadline, burst, periodo;
}task;

int main(int argc, char *argv[]){
    if(argv != NULL && argc > 1){
        if(strcmp(argv[1],"rate") == 0){
            FILE *arquivo = fopen(argv[2],"r");
            if(arquivo!=NULL){
            int tempo_total = 
            }
        }
    }
    return 0;
}