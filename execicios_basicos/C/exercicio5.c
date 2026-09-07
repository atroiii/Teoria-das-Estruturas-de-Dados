#include <stdio.h>
#include <windows.h>

#define is_type(var, type) __builtin_types_compatible_p(__typeof__(var), type)

//Peguei isso no stackoverflow pois como C e um liguagem compilada, apos ela vira codigo de maquina ela apaga
//todas as informações como nome e tipo das variaveis então temos que usra o _Generic que vai esse trabalho antes da compilação
#define typeoof(var) _Generic((var), \
    char: "Char", \
    int: "Integer", \
    float: "Float", \
    double: "Double", \
    char *: "String", \
    void *: "Pointer", \
    default: "Undefined" \
)

int main() {
    //Para Aceita os caracteres especiais
    SetConsoleOutputCP(CP_UTF8);



    int codigo = 105;
    float preco = 89.90f;
    char descricao[] = "Mouse sem fio";
    int coordenadas[] = {20, 35};

    printf("Código e do tipo '%s'\n",typeoof(codigo));
    printf("Preço e do tipo '%s'\n",typeoof(preco));
    printf("Descricao e do tipo '%s'\n",typeoof(descricao));
    return 0;
}
