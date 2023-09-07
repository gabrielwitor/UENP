"""
Escreva um programa em que, dado os números e como entrada pelo teclado, exiba os números divisíveis por M na sequência de a
como saída (onde cada elemento está em sua respectiva linha).
"""

N = int(input('Digite um numero: '))
M = int(input('Digite um numero: '))

for i in range(1, N+1):
  if i % M == 0:
    print(i)