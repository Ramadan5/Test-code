# city1 = 'Cairo'
# city2 = 'Giza'
# city3 = 'Alex'
# city4 = 'Mansoura'

cities =  [
    'Cairo', 'Giza', 'Alex', 'Mansoura',
]


def which_city(i):
    
    if (i == 'C'):
        return 0
    if (i == 'G'):
        return 1
    if (i == 'A'):
        return 2
    if (i == 'M'):
        return 3


print(cities[which_city(i = input ("What's the first letter of your city? "))])


print(cities)