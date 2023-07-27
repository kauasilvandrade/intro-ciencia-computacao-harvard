import sys

if len(sys.argv) != 4:
    print("Falta argumentos de linha de comando: ")
    sys.exit(1)
else:
    print(f"Hello, ", end="")
    for caracter in range(1, len(sys.argv)):
        print(sys.argv[caracter],"", end="")
    print()    
    sys.exit(0)