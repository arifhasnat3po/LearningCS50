import cs50

c = cs50.get_string ("Do you agree? ")

#if c == 'Y' or c == 'y' :
if c.lower() in ["y","yes"]:
    print("Agree")
    
#elif c == 'N' or c == 'N':
elif c.lower() in ["n","no"]:
    print("Disagree")

