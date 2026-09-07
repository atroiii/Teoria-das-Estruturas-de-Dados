#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float preco_unitario = 10.34;
    int quantidade = 100;

    printf("Valor Total antes da alteração\n");
    printf("%.2f\n", preco_unitario * quantidade);

    preco_unitario = 11.99;
    quantidade = 101;

    printf("Valor Total Após a alteração\n");
    printf("%.2f\n", preco_unitario * quantidade);

   return 0;
}