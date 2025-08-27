filmes = ["Homem de Ferro", "Capitao America", "Carros"]

print(filmes)

novo_filme = input("Digite um novo filme para colocar no catalogo: ")

filmes.append(novo_filme) #adicionar no final 
print("Lista apos adicionarmos um novo filme")
print(filmes)

print("Filmes na lista(Linha por Linah): ")
for filme in filmes:
    print(filme)

opcao = input("Voce deseja remover algum filme?: (S - sim N - nao) ")
if opcao == "s" :
    filmes.pop(0) # remover do indice zero

    print("Lista apos remover o primeiro filme: ")
    print(filmes)
elif opcao == "n":
    print(filmes)