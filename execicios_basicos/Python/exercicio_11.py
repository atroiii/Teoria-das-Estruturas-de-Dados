estoque_atual = int(input("Digite o estoque atual: "))
estoque_minimo = int(input("Digite o estoque minimo: "))

if estoque_atual < estoque_minimo:
    print("Reposição necessária")
else:
    print("Estoque suficiente")