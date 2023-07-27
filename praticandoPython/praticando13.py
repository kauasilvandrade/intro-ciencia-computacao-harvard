def media(array, comprimento):
    conta = sum(array) / comprimento
    conta_arredondada = round(conta, 2)
    return conta_arredondada

scores = []

for i in range(3):
    scores.append(int(input("Score: ")))


print(media(scores, len(scores)))