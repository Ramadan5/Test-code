def bubleSort(dataset):
    print(dataset)
    for i in range(len(dataset) - 1, 0, -1):
        for j in range(i):
            if dataset[j] > dataset[j + 1]:
                t = dataset[j]
                dataset[j] = dataset[j + 1]
                dataset[j + 1] = t

    print(dataset)


list = [8, 20, 6, 19, 56, 23, 87, 41, 49, 53]

bubleSort(list)