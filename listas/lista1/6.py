#funcoes

def oi():
    print("Oi, Guilherme")


oi()

def saudacao_com_nome(nome):
    print(f"Olá, {nome}! Bem vindo ao nosso sistema")

saudacao_com_nome("Guilherme")

print("__Exercicio__")

def calcularMedia(n1, n2, n3) :
    media = (n1 + n2 + n3) / 3
    return media 

n1 = float(input("Digite a sua primeira nota: "))
n2 = float(input("Digite a sua segunda nota: "))
n3 = float(input("Digite a sua terceira nota: "))

media_final = calcularMedia(n1, n2, n3)
print(f"O valor da sua media final é: ", media_final)

if media_final >= 7.0 :
    print("Voce passou!")
elif media_final <= 6.0:
    print("Voce nao passou!")