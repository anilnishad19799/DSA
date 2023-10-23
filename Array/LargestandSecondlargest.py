testcase = int(input())

for i in range(testcase):
    sizeofarray =  int(input())
    arr = list(map(int, input().split()))

    setarr = set(arr)
    sortarr = sorted(list(setarr))

    sumvalue = sortarr[-1] + sortarr[-2]
    print(sumvalue)

