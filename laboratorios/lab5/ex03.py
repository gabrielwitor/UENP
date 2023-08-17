"""
Escreva um programa em que, dado um número N como entrada pelo teclado, 
exiba como saída todos os números pares na
sequência de 1 a N (Intervalo fechado).
"""

n = int(input('Digite um valor: '))

for i in range(1,n+1):
    if i % 2 == 0:
        print(i)