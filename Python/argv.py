from sys import argv

if len(argv) == 2:
    print(f'Hello, {argv[1]}')
else:
    print("Hello, mate!")


for t in argv[:-1]:
    print(t)