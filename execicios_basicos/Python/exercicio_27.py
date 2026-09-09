
produtos= {'codigo' : 1, 'nome' : "Notebook", 'preco' : 2000, 'quantidade' : 10}
produtos['valor_estoque'] = produtos['preco'] * produtos['quantidade']
for key, value in produtos.items():
    print(f'{key} = {value}')