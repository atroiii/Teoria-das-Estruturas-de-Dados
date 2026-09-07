#include <stdio.h>
#include <windows.h>

int main () {
    SetConsoleOutputCP(CP_UTF8);
    float preco_inicial = 120.00f, acrescimo = 15.00f;

    printf("Preço antes\n");
    printf("%.2f\n", preco_inicial);
    printf("=====================\n");
    printf("Preço após, utilizado o operador '+='\n");
    printf("%.2f\n", preco_inicial += acrescimo);
    printf("Preço utilizado o operador '*='\n");
    printf("%.2f\n", preco_inicial *= 2);
    return 0;
}