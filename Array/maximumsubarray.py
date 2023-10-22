list2 = []
sumlist = []
# arr = [-2,1,-3,4,-1,2,1,-5,4]
# arr = [1]
arr = [5,4,-1,7,8]

for start in  range(0, len(arr)):
    for  i in range(start, len(arr)):
        k=i
        j=start
        list1 = []
        sum_v=0
        while(j<=k):
            list1.append(arr[j])
            sum_v+=arr[j]
            j+=1

        list2.append(list1)
        sumlist.append(sum_v)

max_sum_index = sumlist.index(max(sumlist))
max_sum_value = sum(list2[max_sum_index])
print(max_sum_value)
        