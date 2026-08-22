import java.util.Scanner;

public class exercicio1 {


    //metodos estaticos, como esta no exercicio
    public static double calculaAreaBase(double pi , double raio){
        return pi * Math.pow(raio,2);
    }
    public static double calculaAreaLateral(double pi, double raio, double altura){
        return 2 * pi * raio * altura;
    }
    public static double calcularAreaTotal(double areaBase, double areaLateral){
        return 2 * areaBase + areaLateral;
    }
    public static double calculaLitrosGastos(double areaTotal){
        return areaTotal / 3;
    }
    public static double calculaQuantidadeLatas(double totalLitros){
        return Math.ceil(totalLitros /5 );
    }
    public static double calcularCusto(double quantidadeLatas){
        return quantidadeLatas * 50;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        final double pi = 3.14;//const em Java
        double raio, altura, areaTotal, quantidadeLatas, custoTotal;//declaração das variaveis

        System.out.print("Digite o valor do Raio ");
        raio = input.nextDouble();

        System.out.print("Digite o valor da Altura ");
        altura = input.nextDouble();

        //aqui em baixo estou chamando metodos dentro de paramentros de metodos para não precisa declara varias variaveis
        //sendo que eu quero somente 3 saidas
        areaTotal = calcularAreaTotal(calculaAreaBase(pi, raio), calculaAreaLateral(pi, raio, altura));
        quantidadeLatas = calculaQuantidadeLatas(calculaLitrosGastos(areaTotal));
        custoTotal = calcularCusto(quantidadeLatas);

        System.out.printf("Área total %.2f M²%n",areaTotal);
        System.out.printf("Quantidade de Latas %.0f unidades%n",quantidadeLatas);
        System.out.printf("Custo Total %.2f%n",custoTotal);

        //fechamento do input
        input.close();
    }
}
