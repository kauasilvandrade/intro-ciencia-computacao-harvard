import csv

nome = str(input("Digite seu nome: "))
nota = int(input("Digite a sua nota: "))

print("Categorias: ")
print("Nomes")
print("Notas")

categoria = str(input("Digite a categoria: "))

with open("notasAlunos.csv", "a") as arquivo:
    escrever = csv.writer(arquivo)
    escrever.writerow([nome,nota])

with open("notasAlunos.csv", "r") as arquivo:
    
    escolha = csv.reader(arquivo)
    
    if "Nomes" in categoria:
        for linha in escolha:
            print(linha[0])
    elif "Notas" in categoria:
        for linha in escolha:
            print(linha[1])