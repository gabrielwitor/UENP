"""
Escreva um código que receba como entrada dois números (N,M) e, na saída, exiba na tela N eh multiplo de M se N for múltiplo de
M e, caso contrário, exiba N nao eh multiplo de M. O programa deve parar de repetir esse processo quando o valor de N digitado for igual -1.
"""

while True:
    n = int(input('Digite um valor: [-1] para sair '))
    m = int(input('Digite outro valor: '))

    if n == -1:
        break
    if m % n == 0:
        print(f'{m} é múltiplo de {n} :)\n')
    else:
        print(f'{m} não é múltiplo de {n}.\n')
