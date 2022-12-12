preco_produto = float(input('Digite o preço do produto:'))
forma_pagamento = (input('Qual a forma de pagamento?(Dinheiro/Cheque/Cartão)')).lower()

if forma_pagamento == 'dinheiro':
    if preco_produto >= 100:
        valor_final = preco_produto*0.9
        print('R$', valor_final)
    else:
        print('R$', preco_produto)
elif forma_pagamento == 'cheque':
    print('R$', preco_produto)
elif forma_pagamento == 'cartão':
    tipo_cartao = input('Cartão de Crédito ou Débito?')
    if tipo_cartao == 'crédito':
        parcelas = int(input('Em quantas vezes deseja parcelar?'))
        if 0 < parcelas <= 3:
            valor_parcela = preco_produto/parcelas
            print('R$', preco_produto, '\n',
                  parcelas, 'parcelas de R$', valor_parcela)
        else:
            print('Número inválido de parcelas')
    else:
        print('R$', preco_produto)
else:
    print('Forma de pagamento inválida')
