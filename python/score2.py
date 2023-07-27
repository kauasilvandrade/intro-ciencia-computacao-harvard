scores = []

for i in range(3):
    scores.append(int(input("Score: ")))

media = sum(scores) / len(scores)
print(f"Média: {media}")