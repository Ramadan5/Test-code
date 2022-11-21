def calculator(x, y):
    a = input ("What would you like to do? ")
    # x = int (input ("What is the value of x? "))
    # y = int (input ("What is the value of y? "))

    if (a == '+'):
        print (f'{x} + {y} = {x + y}')
    
    if (a == '-'):
        print (f'{x} - {y} = {x - y}')

    if (a == '*'):
        print (f'{x} * {y} = {x * y}')
    
    if (a == '/'):
        print (f'{x} / {y} = {x / y}')


# calculator (int (input ("What is the value of x? ")), int (input ("What is the value of y? ")))