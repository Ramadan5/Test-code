def power(num, pwr):
    if pwr == 0:
        return 1
    else:
        return num * power(num, pwr - 1)


def power2(num, pwr):
    x = 1
    while pwr != 0:
        x *= num
        pwr -= 1
    print(x)


def power3(num, pwr):
    x = 1
    for pwr in range(pwr, 0, -1):
        x *= num
    print(x)


print("{} to the power of {} is: {}".format(2, 10, power(2, 10)))
power2(2, 10)
power3(2, 10)
print(pow(2, 10))

def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)


def factorial2(num):
    x = 1
    for num in range(num, 0, -1):
        x *= num
    return x


def factorial3(num):
    x = 1
    while num != 0:
        x *= num
        num -= 1
    return x


print("{} factorial is: {}".format(5, factorial(5)))
print(factorial2(5))
print(factorial3(5))