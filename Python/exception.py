try:
    x = int (input ("Value of X? "))
    y = int (input ("Value of Y? "))
except:
    print("That's not an int!")
    exit()

print(x + y)