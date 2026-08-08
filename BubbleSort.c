#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter size:- ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter Array Values:- ");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    BubbleSort(arr, n);

    printf("Sorted Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}