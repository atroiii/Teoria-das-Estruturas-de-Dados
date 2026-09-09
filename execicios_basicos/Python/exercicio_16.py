quantidades  = [12, 3, 8, 2, 15, 1, 7]
criticos = []
for quantidade in quantidades:
    if quantidade < 5:
        criticos.append(quantidade)
print(f"Quantidade que precisam de atenção: {criticos}")