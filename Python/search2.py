def UOsearch(item, dataset):
    item = int (input ("Which number do you want to search? "))
    i = 0
    while item != dataset[i]:
        i += 1
        if i == len(dataset):
            print("Not Found!")
            return
    if item == dataset[i]:
        print(f'Found {item} at position {i + 1}!')



def UOsearch2(item, dataset):
    item = int (input ("Which number do you want to search? "))

    for i in range(0, len(dataset)):
        if item == dataset[i]:
            print(f'Found {item} at position {i + 1}!')
            return

    print("Not Found!")


list = [8, 20, 6, 19, 56, 23, 87, 41, 49, 53]


UOsearch(0, list)
UOsearch2(0, list)