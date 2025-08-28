import random

print("Bingo comecando")
nomes = ["Guilherme", "Wesley", "Luiz", "Luis", "Adalberto"]
nomes_sorteados = random.choice(nomes)
print(f"Nome sorteado é: ", nomes_sorteados)

print("Numero sorteado")
numero_aleatorio = random.randint(1, 10)
print("Numero aleatorio sorteado é: ", numero_aleatorio)
