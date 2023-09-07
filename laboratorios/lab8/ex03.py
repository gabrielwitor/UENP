"""
Um triângulo é formado por três vértices (pontos cartesianos) na forma (x,y).
Escreva um código que receba como entrada pelo teclado os
dois vértices da hipotenusa e exiba o vértice restante como saída.
Considere um triângulo retângulo. Atente-se às entradas e saídas.
"""

xa = float(input('Digite a coordenada xa: '))
ya = float(input('Digite a coordenada ya: '))
xb = float(input('Digite a coordenada xb: '))
yb = float(input('Digite a coordenada yb: '))

if xa > xb and yb > ya:
  print(xa, yb)
else:
  print(xb,ya)
