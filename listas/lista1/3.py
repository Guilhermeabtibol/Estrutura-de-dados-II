palavra = input("Digite uma palavra: ")

for letra in palavra:
    print(letra)

contador = 0
while contador < len(palavra):
    print(palavra[contador])
    contador = contador + 1 