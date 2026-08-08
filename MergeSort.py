def Merge(arr, low, mid, high):
    i = low
    j = mid+1
    k = 0

    temp = [0] * (high-low+1)
    while i <= mid and j <= high:
        if arr[i] <= arr[j]:
            temp[k] = arr[i]
            k += 1
            i += 1
        else:
            temp[k] = arr[j]
            k += 1
            j += 1
    while i <= mid:
        temp[k] = arr[i]
        k += 1
        i += 1
    while j <= high:
        temp[k] = arr[j]
        k += 1
        j += 1

    k = 0
    for i in range(low, high+1):
        arr[i] = temp[k]
        k += 1

def MergeSort(arr, low, high):
    if low < high:
        mid = (low + high) // 2
        MergeSort(arr, low, mid)
        MergeSort(arr, mid+1, high)

        Merge(arr, low, mid, high)

arr = list(map(int, input("Enter Values:- ").split()))
n = len(arr)

MergeSort(arr, 0, n-1)

print("Sorted Array:- ", arr)