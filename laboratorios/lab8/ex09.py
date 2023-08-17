"""
Escreva um programa em que, dado um número como entrada pelo teclado, exiba como saída todos os primeiros números da
sequência de Fibonacci.
"""

N = int(input())  # Entrada do valor N.

anterior = 0      # Inicialização da variável anterior.
proximo = 0       # Inicialização da variável próximo.

while(proximo < N):
  print(proximo)  # Imprime o valor atual.
  
  proximo, anterior = proximo + anterior, proximo  # Atualização da sequência.
  
  if(proximo == 0):
    proximo += 1  # Incremento especial para evitar loop infinito.