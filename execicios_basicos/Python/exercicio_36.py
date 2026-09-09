sequencia = ['A', 'B', 'C', 'B', 'D']
flag = True
contador = 0
for i in sequencia:
    if i == 'B':
        print(f"Posição onde foi encontrado o valor 'B': index {contador}")
        flag = False
        break
    contador += 1
if flag:
    print("Valor 'B' não foi encontrado")