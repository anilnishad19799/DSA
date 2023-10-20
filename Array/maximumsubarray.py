list1 = []
list2 = []
sumlist = []
i,l = 0,-1
arr = []
flag = True

while(flag):
    i = 0
    l+=1
    k=l

    for j in range(0, len(arr)-k):
        sum = 0
        while(j<=k):
            sum+=arr[j]
            list1.append(arr[j])
        
        list2.append(list1)
        sumlist.append(sum)
        k+=1
