palavras = []

for i in range(3):
    palavra = input("Digite uma palavra: ")
    palavras.append(palavra)

palavras.sort()

print("Palavras em ordem alfabética:")
for palavra in palavras:
    print(palavra)
