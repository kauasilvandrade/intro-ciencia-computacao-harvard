def funcao_concorda():
    
    c = str(input("Você concorda? "))
    
    if c == 'y' or c == 'Y':
        print("Você concorda")
    elif c == 'n' or c == 'N':
        print("Você não concorda")
    else:
        print("Mensagem Errada!")
        print("Digite Y/y ou N/n")
        funcao_concorda()
        
funcao_concorda()        