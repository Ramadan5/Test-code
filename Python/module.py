def calculator ():

    x = int (input ("What is the value of x? "))
    y = int (input ("What is the value of y? "))
    n = input ("What would you like to do? ")

    if (n == '+'):
        print (f'{x} + {y} = {x + y}')
        
    elif (n == '-'):
        print (f'{x} - {y} = {x - y}')

    elif (n == '*'):
        print (f'{x} * {y} = {x * y}')
        
    elif (n == '/'):
        print (f'{x} / {y} = {x / y}')

    elif (n == '%'):
        print (f'{x} % {y} = {x % y}')

    elif (n == '**'):
        print (f'{x} ** {y} = {x ** y}')
    elif (n == '//'):
        print (f'{x} // {y} = {x // y}')

    i = input ("Would you like to run another calculation? (Y/N)" )
        
    if (i == 'Y' or i == 'y'):
        calculator()
    else:
        return
    

# calculator()

# calculator (int (input ("What is the value of x? ")), int (input ("What is the value of y? ")))