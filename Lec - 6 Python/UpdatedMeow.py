'''
def main():
    for i in range (3):
        meow()
        
def meow():
    print("Meow")
main()
'''

def main():
    meow(3)
    
def meow(n):
    for i in range (n):
        print("Meow")
        
main()