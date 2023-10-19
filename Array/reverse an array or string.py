## first logic

arr = [1,2,3,4,5]
print("In program")
flag = False
n = len(arr)-1
for i in range(0, len(arr)):
    print(i,n)
    if i>n:
        temp = arr[i]
        arr[i] = arr[n]
        arr[n] = temp
    n-=1
print(arr)