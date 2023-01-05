first = dict({'key1': 1, 'key2': 2, 'key3': 'three'})

print(first)

second = {}

second['key1'] = 1
second['key2'] = 2
second['key3'] = 3

print(second)

second['key2'] = 'two'

print(second)

for key, value in second.items():
    print("Key:", key, "Value:", value)

# print(first['key6'])