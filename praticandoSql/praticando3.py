frutas = {}

print("Digite 5 frutas e seus preços")

for i in range(2):
    fruta = input("Digite uma fruta: ")
    
    valorFruta = input("Digite o valor da fruta: ")
    
    frutas[fruta] = valorFruta

for fruta, valor in frutas.items():
    print(f"{fruta}: {valor}")