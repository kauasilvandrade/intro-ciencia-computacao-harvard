def pegar_numero_inteiro():
    
    while True:
        number = int(input("Digite um número inteiro: "))
        if number > 1:
            break
    return number

pegar_numero_inteiro()
