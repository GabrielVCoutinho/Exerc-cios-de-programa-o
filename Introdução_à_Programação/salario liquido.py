salario_hora = float(input('Digite seu salario por hora:'))
horas_trabalho = int(input('Quantas horas por mês voce trabalha?'))
salario_bruto = salario_hora*horas_trabalho

inss = 0.08*salario_bruto
sindicato = 0.05*salario_bruto
imposto_renda = 0.11*salario_bruto
salario_liquido = salario_bruto-inss-sindicato-imposto_renda

print('Salario bruto:', salario_bruto)
print('IR(11%):', imposto_renda)
print('INSS(8%):', inss)
print('Sindicato(5%):', sindicato)
print('Salario líquido:', salario_liquido)
