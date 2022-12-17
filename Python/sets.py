primaryColors = frozenset(["Red", "Blue", "Yellow"])

color = input ("Which color would like to check? ")

if color.capitalize() in primaryColors:
    print("Yes, " + color.capitalize() + " is a primary color.")
else:
    print("No, " + color.capitalize() + " is not a primary color.")

print(primaryColors)

# primaryColors.add("black")
# primaryColors.remove("Red")