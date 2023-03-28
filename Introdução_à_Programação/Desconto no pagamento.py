preco_produto = float(input('Digite o preço do produto:'))
forma_pagamento = input('Qual a forma de pagamento?(Dinheiro/Cheque)')

if forma_pagamento == 'Dinheiro':
    if preco_produto >= 100:
        valor_final = preco_produto*0.9
        print('R$', valor_final)
    else:
        print('R$', preco_produto)
elif forma_pagamento == 'Cheque':
    print('R$', preco_produto)
else:
    print('Forma de pagamento inválida')
