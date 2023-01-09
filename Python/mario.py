def main():
    h = getHeight()
    for i in range(h):
        print("#", end = "")
    print()

def getHeight():
    while True:
        try:
            n = int (input ("How many hashes? "))
            if n > 0:
                break
        except:
            print("That's not a valid digit!")
    return n


main()

print("#" * 4)