while True:
    try:
        print("1 - Consultar")
        print("0 - Sair")
        opcao = int(input())
        if opcao == 0:
            print("Saindo do sistema...")
            break
    except ValueError:
        continue