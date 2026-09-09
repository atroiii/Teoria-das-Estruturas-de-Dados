nome_cliente = "CLIENTE PREMIUM"
nome_minusculo = nome_cliente.lower()
nome_maiusculo = nome_cliente.upper()
nome_substituindo = nome_cliente.replace("PREMIUM","PADRÃO")

print(f"Com letras minúsculas: {nome_minusculo}")
print(f"Com letras maiúsculas: {nome_maiusculo}")
print(f"Com a palavra `PREMIUM` substituída por `PADRÃO`: {nome_substituindo} ")