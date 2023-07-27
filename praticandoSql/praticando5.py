import csv

titulo = input("Digite um nome de filme: ").strip().upper()

with open("nomes.csv", "r") as arquivo:
    leitor = csv.DictReader(arquivo)
    
    contador = 0
    
    for row in leitor:
        if row["Nomes"].strip().upper() == titulo:
            contador += 1
            
print(contador)        