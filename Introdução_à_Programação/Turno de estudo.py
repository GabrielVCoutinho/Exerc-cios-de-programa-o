Turno_estudo = input(
    'Em qual turno voce estuda? Responda (M) para Manhã, (T) para Tarde e (N) para Noite.')

if Turno_estudo == 'M':
    print('Bom dia!')
elif Turno_estudo == 'T':
    print('Boa tarde!')
elif Turno_estudo == 'N':
    print('Boa noite!')
else:
    print('Valor inválido!')
