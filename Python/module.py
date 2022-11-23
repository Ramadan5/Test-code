def calculator (x = int (input ("What is the value of x? ")), y = int (input ("What is the value of y? "))):
    n = input ("What would you like to do? ")

    if (n == '+'):
        print (f'{x} + {y} = {x + y}')
    
    if (n == '-'):
        print (f'{x} - {y} = {x - y}')

    if (n == '*'):
        print (f'{x} * {y} = {x * y}')
    
    if (n == '/'):
        print (f'{x} / {y} = {x / y}')

    if (n == '%'):
        print (f'{x} / {y} = {x % y}')

    if (n == '**'):
        print (f'{x} / {y} = {x ** y}')


# calculator()

# calculator (int (input ("What is the value of x? ")), int (input ("What is the value of y? ")))