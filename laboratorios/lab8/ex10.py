"""
Escreva um programa que, dado um valor de , calcule o valor de , sendo dado pela expressão a+aa+aaa+aaaa.
"""

a = int(input('Entre com um numero: '))
N = a + (a*10 + a) + (a*100 + a*10 + a) + (a*1000 + a*100 + a*10 + a)
print(N)