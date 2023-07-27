letras = []
num = 0

vezesLetras = int(input("Digite a quantidades de letras: "))

for i in range(vezesLetras):
    letras.append(input("Digite as letras: "))
    
for i in sorted(letras):
    num += 1
    print(i, num)