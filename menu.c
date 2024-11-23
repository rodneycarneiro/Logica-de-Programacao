/* Autor....: Rodney CArneiro
   Data.....: 10/04/2023
   Objetivo.: Menu*/
#include <stdio.h>

int main(){
    int op = 0;
    do{
        printf("Escolha uma opcao:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op);
    }while(op < 1 || op > 2);
    return 0;
}