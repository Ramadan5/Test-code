def binarySearch(item, dataset):
    item = int (input ("Which number do you want to search? "))
    
    loweridx = 0
    upperidx = len(dataset) - 1
    
    while loweridx <= upperidx:
        mid = (loweridx + upperidx) // 2
        if item == dataset[mid]:
            print(f'Found {item} at position {mid + 1}!')
            return
        elif item > dataset[mid]:
            loweridx = mid + 1
        elif item < dataset[mid]:
            upperidx = mid - 1

    # if loweridx > upperidx:
    print("Not Found!")



list = [6, 8, 19, 20, 23, 41, 49, 53, 56, 87]


binarySearch(0, list)