departamentos = "TI;Financeiro;RH;TI;Compras"
lista_departamentos = departamentos.split(";")
lista_departamentos_miniusculas = list(map(lambda x: x.lower(), lista_departamentos))
conjunto_departamentos =  set(lista_departamentos_miniusculas)
print(conjunto_departamentos)
