scores = [30, 99, 41, 55, 84]
scores_new = []
print(scores)
for x in scores:
    if x >= 90:
        scores_new += [x]
    else:
        if x + 10 >= 90:
            scores_new += [90]
        else:
            scores_new += [x+10]        
print(scores_new)   