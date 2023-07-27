from cs50 import get_int

def main():
    
    get_positive_int()

def get_positive_int():
    while True:
        number = get_int("Digite um número inteiro: ")
        if number >= 1:
            break
    return number    
    
main()

