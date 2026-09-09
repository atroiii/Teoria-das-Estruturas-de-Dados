lista = ['P10', 'P20', 'P30', 'P40']
flag = True
codigo_remover = str(input("Digite o código que deseja remover: "))


for codigo in lista:
    if codigo == codigo_remover :
        lista.remove(codigo)
        flag = False
        break
if flag:
    print("Nenhuma alteração foi realizada")