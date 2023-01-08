def findMax (dataset):
    if len(dataset) == 1:
        return dataset[0]
        
    t = dataset[0]
    k = findMax(dataset[1:])
    
    if t > k:
        return t
    else:
        return k


list = [6, 8, 19, 20, 23, 41, 49, 53, 56, 87, 100, 0]


print(findMax(list))