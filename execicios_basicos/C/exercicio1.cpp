#include <stdio.h>
#include <math.h>

//funções como esta no exercicio
float calculaAreaBase(float pi, float raio) {
    return pi * pow(raio , 2);
}
float calcularAreaLateral(float pi ,float raio, float altura) {
    return 2 * pi * raio * altura;
}
float calcularAreaTotal(float areaBase, float areaLateral) {
    return 2 * areaBase + areaLateral;
}
float calcularLitrosTotais(float areaTotal) {
    return areaTotal / 3;
}
float calcularQuantidadeLatas(float litrosTotais) {
    return ceil(litrosTotais / 5);
}
float calculaCusto(float quantidadeLatas) {
    return quantidadeLatas * 50;
}

int main() {
    const float pi = 3.14;//em C temos constante e essa e a declaração dela
    float raio, altura, areaTotal, quantidadeLatas, custoTotal;//declaração das variaveis que eu preciso

    //sempre toma cuidado após usar o scanf para ler um número ele deixar um caractere de quebra de linha \n
    //podemos usar um espaço antes do %c + ele não cobre 100% do erros, a melhor maneira e usar o fgets
    //fgets(destino(e a variavel que vai receber), tamanho(sempre vai ser oque voce coloca -1 pois temos o \0), stdin);
    //exemplo: printf("Digite seu nome completo: ");
    //fgets(nome, sizeof(nome), stdin); // Lê até 49 caracteres + \0

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    printf("Digite o valor do altura: ");
    scanf("%f", &altura);

    //aqui para não precisa fica colocando varias varias, pois eu so preciso de 3 coisas
    //estou chamando funções dentro de argumentos de funções
    areaTotal = calcularAreaTotal(calculaAreaBase(pi, raio), calcularAreaLateral(pi, raio, altura));
    quantidadeLatas = calcularQuantidadeLatas(calcularLitrosTotais(areaTotal));
    custoTotal = calculaCusto(quantidadeLatas);

    printf("Area total %.2f M²\n", areaTotal);
    printf("Total de litros usados %.0f unidades\n", quantidadeLatas);
    printf("Total gasto R$%.2f\n", custoTotal);

   return 0;
}