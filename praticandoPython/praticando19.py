import csv

def main(): 

    nome = [] 
    nota = []

    for i in range(1, 6):
        nome.append(str(input(f"Nome do {i}° Aluno: ")))
        nota.append(int(input(f"Nota do {i}° Aluno: ")))    
     
    with open("notasAlunos.csv", "a") as arquivo:
        
        escrever = csv.writer(arquivo)
        for i in range(5):
            escrever.writerow([nome[i], nota[i]])
    
main()