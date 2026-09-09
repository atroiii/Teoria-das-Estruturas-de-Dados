#não e possivel modificar tuplas, pois tuplas são imutaveis
try:
    coordenada = (10,20)
    coordenada[0] = 1
except TypeError:
    print("Erro Tuplas são imutaveis")
posicao = (15,20)

print(coordenada)
print(posicao)