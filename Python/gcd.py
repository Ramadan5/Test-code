# Greatest Common Denominator

def gcd (x = int (input ("First Number? ")), y = int (input ("Second Number? "))):
    while (y != 0):
        r = x
        x = y
        y = r % y
    print ('Common Denominator is:', x)


gcd ()

# x = int (input ("First Number? "))
# y = int (input ("Second Number? "))

# if (x > y):
#     r = x % y
# elif (x < y):
#     r = y % x

# if (r == 0):
#     print ('Remainder is Zero!')

# elif (x % r == 0 and y % r == 0):
#     print ('Common Denominator is:', r)

# elif (x % r and y % r != 0):
#     while ():
#         y = x
#         r = y
#     print (r)