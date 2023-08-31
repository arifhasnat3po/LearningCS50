from cs50 import get_string


people = {
    
    "XY" : "07698769876",
    "YZ" : "98708973450"
}

name = get_string("Name : ")

if name in people:
    print(f"Number {people[name]}")
    print ("Number : "+ people[name] )