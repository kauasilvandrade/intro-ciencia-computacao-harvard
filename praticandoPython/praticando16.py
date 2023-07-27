import sys

lista_frutas = [
    'Abacaxi', 'Abacate', 'Amora',
    'Banana', 'Bacuri', 'Buriti',
    'Caju', 'Carambola', 'Cacau',
    'Damasco', 'Durião','Embaúba',
    'Figo', 'Framboesa','Goiaba', 
    'Graviola', 'Groselha','Heisteria',
    'Ingá','Jambo', 'Jabuticaba',
    'Kiwi','Laranja', 'Limão', 
    'Lichia','Mamão', 'Maça', 'Melancia', 
    'Marmelo','Nectarina', 'Nêspera',
    'Olho-de-boi','Pera', 'Pêssego',
    'Physalis','Quina', 'Romã', 'Seriguela', 
    'Sapoti', 'Tâmara', 'Tamarindo', 
    'Tangerina','Umbu', 'Uva',
    'Veludo', 'Wampee', 'Xixá',
    'Yamamomo', 'Zimbro'
]

nome_fruta = str(input("Pesquise uma fruta: "))

for fruta in lista_frutas:
    if fruta == nome_fruta:
        print(f"Encontrado: {nome_fruta}")
        break
else:
    print(f"Não Encontrado: {nome_fruta}")