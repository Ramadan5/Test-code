import csv

file = open ("phonebook.csv", "a")

name = input ("Contact name: ")
number = input ("Contact number: ")

contacts = csv.writer(file)
contacts.writerow ([name, number])

file.close()


# name = input ("Contact name: ")
# number = input ("Contact number: ")

# with open ("phonebook.csv", "a") as file:
#     contacts = csv.writer(file)
#     contacts.writerow ([name, number])