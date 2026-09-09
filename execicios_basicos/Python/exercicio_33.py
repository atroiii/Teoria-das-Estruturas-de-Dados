frequencias = dict()
palavra = "ABACADABRA"
contador_a = contador_b = contador_c = contador_d = contador_r = 0

for letra in palavra:
    match letra.upper():
        case "A":
            contador_a += 1
        case "B":
            contador_b += 1
        case "C":
            contador_c += 1
        case "D":
            contador_d += 1
        case "R":
            contador_r += 1

frequencias["A"] = contador_a
frequencias["B"] = contador_b
frequencias["C"] = contador_c
frequencias["D"] = contador_d
frequencias["R"] = contador_r
for key,value in frequencias.items():
    print(f"Letra {key} teve {value} ocorrências")