# Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

# First solution
arr = [1,2,3,1]
# sort_arr = arr.sort()

# flag = False
# for i in range(len(arr)-1):
#     if arr[i]==arr[i+1]:
#         flag = True
#         break

# if flag:
#     print("True")
# else:
#     print("False")

flag = False
for i in  range(len(arr)):
    for j in range(i+1, len(arr)):
        if arr[i]==arr[j]:
            flag = True
            break
    if flag:
        break

if flag:
    print("True")
else:
    print("False")