alunos = {
    'aluno_1' :
        {'nome' : "Arthur", 'nota' : 100},
    'aluno_2' :
        {'nome' : "Felipe", 'nota' : 80},
    'aluno_3' :
        {'nome' : "Rodrigo", 'nota' : 70},
    'aluno_4' :
        {'nome' : "Silva", 'nota' : 50},
    'aluno_5' :
        {'nome' : "Rafael", 'nota' : 40}
}

for key,value in alunos.items():
    if value['nota'] < 60:
        print(f"Aluno: {value['nome']} nota {value['nota']}")