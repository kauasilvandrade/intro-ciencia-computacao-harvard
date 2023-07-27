import sys

numbers = [2, 4, 8, 5, 0]

if 0 in numbers:
    print("Encontrado")
    sys.exit(0)
else:
    print("Não Encontrado")
    sys.exit(1) 