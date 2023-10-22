testcase = int(input())

for i in range(testcase):
    no_of_item, minimumfreshnessvalue = input().split()
    no_of_item, minimumfreshnessvalue = int(no_of_item), int(minimumfreshnessvalue)
    freshnessvalue = list(map(int, input().split()))
    costofitem = list(map(int, input().split()))

    sum = 0
    for i in range(len(freshnessvalue)):
        if freshnessvalue[i]>=minimumfreshnessvalue:
            sum+=costofitem[i]
    print(sum)