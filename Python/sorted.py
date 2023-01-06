def is_sorted(dataset):
    for i in range(len(dataset) - 1):
        if dataset[i] > dataset[i + 1]:
            print("Not sorted!")
            return
    
    print("Sorted!")


def is_sorted2(dataset):
    print(all (dataset[i] <= dataset[i + 1] for i in range(len(dataset) - 1)))



list1 = [6, 8, 19, 20, 23, 41, 49, 53, 56, 87]
list2 = [8, 20, 6, 19, 56, 23, 87, 41, 49, 53]

is_sorted(list1)
is_sorted(list2)

is_sorted2(list1)
is_sorted2(list2)