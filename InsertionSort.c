#include <stdio.h>

void InsertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n;
    printf("Enter size:- ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Values:- ");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    InsertionSort(arr, n);

    printf("Sorted Array:- ");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}