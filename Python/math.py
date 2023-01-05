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


print(power(5, 8))
power2(5, 8)
power3(5, 8)
print(pow(5, 8))