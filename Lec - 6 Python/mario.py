def main():
    n = get_height()
    for i in range(n):
        print("#")
def get_height():
    while True:
        try:
            n = int(input("Height : "))
            if n > 0:
                break
        except ValueError:
            print("Please enter a number")
    return n
main()