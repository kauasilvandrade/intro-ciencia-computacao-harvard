texto = str(input("Antes: "))

print("Depois: ", end="")

for char in texto:
    if char.islower():
        print(char.upper(), end="")
    else:
        print(char, end="")        