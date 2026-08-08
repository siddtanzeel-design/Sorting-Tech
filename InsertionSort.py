def InsertionSort(arr, n):
    for i in range(n):
        key = arr[i]
        j = i-1
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

arr = list(map(int, input().split()))
n = len(arr)

print("Input array:- ", arr)

InsertionSort(arr, n)

print("Sorted Array:- ", arr)