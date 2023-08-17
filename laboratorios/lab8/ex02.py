"""
Dados os pontos e como entrada pelo teclado, escreva um código que exiba na tela a distância entre ambos.
Observação: A distância entre dois pontos e é dada por
"""
from math import sqrt

xa = float(input('Digite a coordenada xa: '))
ya = float(input('Digite a coordenada ya: '))
xb = float(input('Digite a coordenada xb: '))
yb = float(input('Digite a coordenada yb: '))

dist = sqrt((xb-xa)**2 + (yb - ya)**2)

print(f"A distância é de {round(dist,2)} unidades de comprimento.")