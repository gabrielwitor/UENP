"""
Validar um cadastro considerando:

-O nome de usuário deve ter pelo menos 4 letras;
-A senha deve ter ao menos 8 caracteres;
-A idade deve ser de, no mínimo, 15 anos.
"""
print('Bem vindo ao cadastro da nossa plataforma')

while True:
    nome = input('Digite o nome do usuário: ')
    senha = input('Digite a senha do usuário: ')
    idade = int(input('Digite a idade do usuário: '))
    if len(nome) < 4:
        print('O nome deve ter pelo menos 4 letras.')
        continue
    if len(senha) < 8:
        print('A senha deve ter pelo menos 8 caracteres.')
        continue
    if idade < 15:
        print('A idade mínima para se cadastrar é 15 anos.')
        continue
    break

print('Cadastro completo!')


