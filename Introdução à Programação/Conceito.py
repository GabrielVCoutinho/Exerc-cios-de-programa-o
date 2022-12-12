parcial_1 = float(input('Digite sua primeira nota:'))
parcial_2 = float(input('Digite sua segunda nota:'))
media_parcial = (parcial_1+parcial_2)/2

if media_parcial >= 9:
    print('Conceito: A')
elif media_parcial >= 7.5:
    print('Conceito: B')
elif media_parcial >= 6:
    print('Conceito: C')
elif media_parcial >= 4:
    print('Conceito: D')
else:
    print('Conceito: E')
