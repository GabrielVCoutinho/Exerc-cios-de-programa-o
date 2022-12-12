lado_1 = float(input('Digite o primeiro lado do triângulo:'))
lado_2 = float(input('Digite o segundo lado do triângulo:'))
lado_3 = float(input('Digite o terciro lado do triângulo:'))

if lado_1 == lado_2:
    if lado_2 == lado_3:
        print('Triângulo Equilátero: três lados iguais')
    else:
        print('Triângulo Isósceles: dois lados iguais')
elif lado_1 == lado_3:
    print('Triângulo Isósceles: dois lados iguais')
elif lado_2 == lado_3:
    print('Triângulo Isósceles: dois lados iguais')
else:
    print('Triângulo Escaleno: três lados diferentes')
