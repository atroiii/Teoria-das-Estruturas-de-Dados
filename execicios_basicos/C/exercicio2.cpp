#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    //Para Aceita os caracteres especiais
    SetConsoleOutputCP(CP_UTF8);
    float despesa_yotal = 587.50;
    int total_participantes = 8;

    //essa parte aqui 'floor(despesaTotal / totalParticipantes)' vai pegar a divisão e arredonda para baixo
    //o .0f vai tira as partes decimais entra vai ser o mesmo que a divisão inteira

    //fmodf serve para pega o modulo(resto da divisão entre (despesaTotal, totalParticipantes)

    printf("Divisão inteira = %.0f\n", floor(despesa_yotal / total_participantes));
    printf("Resto da Divisão = %.2f\n",  fmod(despesa_yotal, total_participantes));

    return 0;
}
