items = ["apple", "pear", "orange", "banana", "apple",
         "orange", "apple", "pear", "banana", "orange",
         "apple", "kiwi", "pear", "apple", "orange"]


filter = {}
# filter = dict()

for key in items:
    filter[key] = 0


print(set(filter.keys()))

