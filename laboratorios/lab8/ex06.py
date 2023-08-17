"""
Escreva um código que receba pelo teclado duas strings , onde o tamanho de e o tamanho de sejam . O código deve exibir na
tela uma palavra (totalmente minúscula) contendo os três primeiros caracteres de e os três ultimos caracteres de .
"""

while True:
  A = input('Escreva algo: ')
  B = input('Escreva algo: ')
  if len(A) <= 2 or len(B) <= 2:
    print('As palavras devem ter mais de 3 letras.')
  else:
    break

print(A[0:3]+B[-3:])
