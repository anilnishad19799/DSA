def minMax(arr):
    min = 10000
    max = -1000

    for i in range(len(arr)):
        if arr[i] < min:
            min = arr[i]
        if arr[i] > max:
            max = arr[i]
        
    return min , max


array = [12,54,36,87,23]
min, max = minMax(array)
print("min", min, "max", max)