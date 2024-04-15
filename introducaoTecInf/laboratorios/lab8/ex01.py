"""
Sabendo que a área de uma circunferência é dada por S = π × r², escreva um código que receba do teclado r e exiba na tela S. Utilize a
constante pi fornecida pela linguagem.
"""
from math import pi

r = float(input('Digite o valor do raio: '))
s = pi * r**2
print(f'O valor da área de uma circunferência de raio {r} é {round(s,2)} unidades de área')