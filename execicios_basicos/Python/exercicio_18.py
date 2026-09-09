contador = 1
contador_impares = 1

print("Solução do problema")
while contador <= 5:
   print(contador)
   contador += 1

print("Solução para exibir apenas 1, 3 e 5")
while contador_impares <= 5:
    if contador_impares % 2 != 0:
        print(contador_impares)
    contador_impares += 1
