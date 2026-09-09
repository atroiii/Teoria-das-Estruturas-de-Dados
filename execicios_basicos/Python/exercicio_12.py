try:
    tempo_espera = int(input("Quanto tempo de espera? "))
    if tempo_espera <= 5:
        print("Adequado")
    elif 6 <= tempo_espera <= 10:
        print("Atenção")
    else:
        print("Crítico")
except ValueError:
    print("Digite apenas numeros inteiros")