testcase =  int(input())

for i in range(testcase):
    noofdays = int(input())
    ALicerun = list(map(int, input().split()))
    Bobrun = list(map(int, input().split()))

    count = 0
    for i in range(noofdays):
        if ALicerun[i] <= 2* Bobrun[i] and Bobrun[i] <= 2 * ALicerun[i]:
            count+=1

    print(count)