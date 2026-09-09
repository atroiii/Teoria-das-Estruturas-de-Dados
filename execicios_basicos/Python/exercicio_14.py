senha_correta = 2025
tentativas = 0
while True:
    tentativas_senha = int(input("Digite a senha: "))
    if tentativas_senha == senha_correta:
        print("Senha correta")
        break
    else:
        tentativas += 1
        if tentativas == 3:
            print("Você atingiu o máximo de tentativas")
            break
        print(f"Você ainda tem {3 - tentativas} tentativas antes do bloqueio")
