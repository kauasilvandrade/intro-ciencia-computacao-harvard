palavras = []

for i in range(5):
    palavras.append(input("Digite uma fruta: "))

for i in sorted(palavras):
    palavras.add(i)
    print(i)