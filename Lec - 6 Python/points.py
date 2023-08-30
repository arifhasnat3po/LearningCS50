import cs50

points = cs50.get_int("How many points did you lose? ")

if points < 2 :
    print("You lose fewer points than me")
    
elif points > 2 :
    print("You lose more points than me")
    
else :
    print("You lose the same amount of points as me")