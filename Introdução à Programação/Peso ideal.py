genero = input('Digite "H" se voce é homem, e "M" se voce é mulher:')
altura = float(input('Digite sua altura em metros:'))

if genero == 'H':
    peso_ideal = (72.7*altura)-58
    print('Sua peso ideal é:', peso_ideal)
elif genero == 'M':
    peso_ideal = (62.1*altura)-44.7
    print('Sua peso ideal é:', peso_ideal)
