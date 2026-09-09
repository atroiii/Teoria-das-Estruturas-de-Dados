try:
    quantidade = input("Digite a quantidade: ")
    if type(quantidade) != int:
        quantidade = int(quantidade)
    print("Quantidade: ", quantidade)
except ValueError:
    print("Digite apenas números inteiros")
