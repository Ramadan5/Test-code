scores = []

for i in range(3):
    score = int (input ("Score? "))
    scores.append(score)
    # scores += [score]

avarage = sum(scores) / len(scores)

print(avarage)