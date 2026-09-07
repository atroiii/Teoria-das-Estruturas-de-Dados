#include <stdio.h>
#include <windows.h>


int main() {
    //Para Aceita os caracteres especiais
    SetConsoleOutputCP(CP_UTF8);
    int segundos = 1367;
    int minutos;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d minutos %d segundos\n",minutos,segundos);
    return 0;
}
