"""
Tente fazer um programa que dados três valores, mostre qual é o maior deles. 
Caso tenha valores iguais, deve sinalizar que existe pelo menos
dois valores iguais (não precisa indicar quais são as variáveis com mesmo valor).
"""
n1 = 0
n2 = 7
n3 = 1.6

if n1 == n2 or n2 == n3 or n1 == n3:
    print('A pelo menos dois valores iguais')

if n1 <= n2:
    n1 = n2

if n1 <= n3:
    n1 = n3

print(f'O maior dos valores é: {n1}')


