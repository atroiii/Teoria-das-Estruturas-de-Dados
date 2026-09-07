#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char codigo[] = "BR-2026-4587";
    char ano[5] = {0}, pais[3] = {0}, numero[5] = {0};
    int i = 0, j = 0, k = 0;
    int index_ano = 0, index_numero = 0;

    while (true) {
       if (codigo[i] == '-') {
           index_ano = i + 1;
           break;
       }else{
       pais[i] = codigo[i];
       i++;
       }
   }

    while (true) {
        if (codigo[index_ano] == '-') {
            index_numero = index_ano + 1;
            break;
        }
        else {
            ano[j] = codigo[index_ano];
            index_ano ++;
            j++;
        }
    }

    while (true) {
        if (codigo[index_numero] == '\0') {
            break;
        }else {
            numero[k] = codigo[index_numero];
            k++;
            index_numero ++;
        }
    }


    printf("Pais: %s\n", pais);
    printf("Ano: %s\n", ano);
    printf("Numero: %s\n", numero);


    return 0;
}