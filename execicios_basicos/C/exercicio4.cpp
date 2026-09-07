#include <stdio.h>
#include <windows.h>

int main() {
    //Para Aceita os caracteres especiais
    SetConsoleOutputCP(CP_UTF8);

    //somente quantidade_estoque pois esta utilizado snake_case
    int produto = 100, preco_produto = 100, codigo= 100;

    printf("Produto = %d\n", produto);
    printf("Preco = %d\n", preco_produto);
    printf("Codigo = %d\n", codigo);

    return 0;
}
