# Greatest Common Denominator

def gcd (x = int (input ("First Number? ")), y = int (input ("Second Number? "))):
    while (y != 0):
        r = x
        x = y
        y = r % y
    print ('Common Denominator is:', x)


gcd ()