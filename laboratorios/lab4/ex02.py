# escreva aqui o programa que nos diz se ela tem menos, 
# mais ou exatamente 5 letras. Dica: tente usar a função 'len(palavra)'

palavra = 'Gabriel'

if len(palavra) > 5:
    print(f'A palavra "{palavra}" tem mais de 5 letras.')
elif len(palavra) < 5:
    print(f'A palavra "{palavra}" tem menos de 5 letras.')
else:
    print(f'A palavra "{palavra}" tem exatamente 5 letras.')