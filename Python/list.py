cities = [
    'Cairo', 'Giza', 'Alex', 'Mansoura',
]


def which_city(i = input ("What's the first letter of your city? ")):
    
    if (i == 'C'):
        return 0
    if (i == 'G'):
        return 1
    if (i == 'A'):
        return 2
    if (i == 'M'):
        return 3


print(cities[which_city()])


print(cities)