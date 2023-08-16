"""
Dadas duas variaveis, imprima o maior valor
"""

a = int(input('Digite um valor: ')) # Entradas do usuário
b = int(input('Digite um valor: '))

if a>b: # if para verificar o maior dos valores.
    print(f'O maior dos valores é {a}')
elif b>a:
    print(f'O maior dos valores é {b}')
else:
    print('Os valores são iguais.')