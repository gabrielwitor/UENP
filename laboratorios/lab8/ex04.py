"""
Imagine o seguinte cenário: você vive em uma região onde a moeda corrente são balões coloridos. Você e seus P - 1 amigos encontram
uma certa quantia de balões em um local aleatório. Vocês decidem dividir igualmente os balões e deixam o restante no local para o
próximo que encontrar. Dado o número de pessoas presentes no momento (incluindo você) e o número de balões encontrados, escreva um
código que exiba quantos balões cada pessoa receberá e quantos balões serão deixados no local.
"""

p = int(input("insira o numero de amigos (contando contigo): "))
b = int(input("insira o numero de balões achados: "))

qtdbalao = b // p
resto = b % p

print(f'Cada pessoa recebe {qtdbalao} balões. Serão deixados {resto} balões no local.')