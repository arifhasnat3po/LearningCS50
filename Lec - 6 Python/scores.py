import cs50

scores = []

for i in range(3):
    score = cs50.get_int("Scores : ")
    scores.append(score)
    #scores += [score]
    #scores = scores + [score]
average = sum(scores)/len(scores)
print ("Average : " + str(average))
                         