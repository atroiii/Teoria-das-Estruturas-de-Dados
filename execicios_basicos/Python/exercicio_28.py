produto = {'codigo': 'P01', 'quantidade': 10, 'setor': 'A'}
print(f"Antes da mudança {produto}")
print("==================================================================")
produto['quantidade'] += 5
produto['setor'] = 'B'
print(f"Após a mudança {produto}")