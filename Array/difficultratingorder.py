testcase = int(input())

for i in range(testcase):
    N = int(input())
    arr = list(map(int, input().split()))

    flag = False
    for j in range(N-1):
        if arr[j]>arr[j+1]:
            flag =True
        
    if flag:
        print('No')
    else:
        print("Yes")