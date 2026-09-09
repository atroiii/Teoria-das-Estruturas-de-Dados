produtos = {
    'Mouse': 8,
    'Teclado': 2,
    'Monitor': 5,
    'Webcam' : 1
}
print("Antes da Alteração do teclado")
for chave, valor in produtos.items():
    if valor < 5 :
        print(chave, valor)
print("============================")
produtos['Teclado'] = 7

print("Após a alteração do teclado")

for chave, valor in produtos.items():
    if valor < 5 :
        print(chave, valor)
