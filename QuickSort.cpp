#include <iostream>
using namespace std;

int Partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i=low-1;

    for(int j=0;i<high;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = Partition(arr, low, high);

        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);
    }
}

int main()
{
    int n;
    cout << "Enter size:- ";
    cin >> n;

    int arr[n];
    cout << "Enter values:- ";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    QuickSort(arr, 0, n - 1);

    cout << "Sorted array:- ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    return 0;
}