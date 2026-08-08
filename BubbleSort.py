def BubbleSort(num, n):
    for i in range(n-1):
        for j in range(n-1-i):
            if num[j] > num[j+1]:
                temp = num[j]
                num[j] = num[j+1]
                num[j+1] = temp

num = list(map(int, input("Enter Array Values:- ").split()))
n = len(num)
BubbleSort(num, n)

print(num)