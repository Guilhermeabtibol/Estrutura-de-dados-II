pessoa = {
    "nome": "Guilherme",
    "idade": "19",
    "cidade": "Recife"
}
print(pessoa)
print(f"A idade de {pessoa["nome"]} é {pessoa["idade"]}")

nova_chave = input("Digite uma nova informacao para preencher o perfil dessa pessoa (ex: Esporte favorito): ")

novo_valor = input(f"Digite o valor para '{nova_chave}'")

pessoa[nova_chave] = novo_valor

print(pessoa)


