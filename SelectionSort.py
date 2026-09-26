def SelectionSort(arr, n):

    for i in range(n-1):
        minIndex = i

        for j in range(i+1, n):
            if arr[j] < arr[minIndex]:
                minIndex = j

        temp = arr[i]
        arr[i] = arr[minIndex]
        arr[minIndex] = temp

arr = list(map(int, input("Enter Elements: ").split()))

c=0
for val in arr:
    c+=1

SelectionSort(arr, c)

for i in range(c):
    print(arr[i], end=" ")
