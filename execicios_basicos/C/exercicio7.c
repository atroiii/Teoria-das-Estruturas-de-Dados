#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    //o Exercicio perdi para não criar uma variavel temporaria porem a
    //lista foi feita para se realizada em python então como estou fazendo tambem em C não e possivel realizar isso

    char prioridade_a[10] = "Alta";
    char prioridade_b[10] = "Baixa";
    char temp[10];

    strcpy(temp, prioridade_a);
    strcpy(prioridade_a, prioridade_b);
    strcpy(prioridade_b, temp);


    printf("prioridade_a = %s\n", prioridade_a);
    printf("prioridade_b = %s\n", prioridade_b);
    return 0;
}