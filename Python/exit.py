from sys import argv

if len(argv) != 2:
    print("Error: Missing command-line argument!")
    exit(1)
else:
    print("Hello, " + argv[1])
    exit(0)