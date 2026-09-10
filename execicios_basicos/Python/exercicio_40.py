equipamentos = {
    'cpu-I5' : {'nome' : "cpu",'status' : "disponivel"},
    'monitor-LG-27' : {'nome' : "monitor",'status' : "emprestado"},
    'teclado-Havit' : {'nome' : "teclado",'status' : "disponivel"},
    'mouse-Havit' : {'nome' : "mouse",'status' : "emprestado"},
    'fone-Havit' : {'nome' : "fone",'status' : "disponivel"},
}

equipamento_desejado = input("Qual o nome do equipamento? ")
flag = True
for chave, valor in equipamentos.items():
    if valor['nome'] == equipamento_desejado.lower():
        if valor['status'] == "disponivel" and valor['status'] != "emprestado":
            valor['status'] = "emprestado"
            flag = False
        else:
            flag = False
            print("Equipamento já esta emprestado")

if flag == True:
    print("Esse equipamento não existe no sistema")

print("Equipamentos:")
for chave, valor in equipamentos.items():
    print(f"{chave}: {valor}")

