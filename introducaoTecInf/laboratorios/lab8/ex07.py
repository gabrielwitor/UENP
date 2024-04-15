"""
Escreva um código que receba como entrada um número e, na saída, exiba na tela 'Sim' se é primo ou 'Não', caso contrário.
"""

n = int(input('Digite um número pra ver se é primo ou não: '))
div = 0

for i in range(1,n+1):
  if (n % i == 0):
    div += 1

if div <= 2:
  print('Sim')
else:
  print('Não')