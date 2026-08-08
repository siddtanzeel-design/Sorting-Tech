#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
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
    cout << "Enter size:- ";
    cin >> n;

    int arr[n];
    printf("Enter values:- ");
    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << "Input Array:- " << endl;
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    BubbleSort(arr, n);

    cout << "\nSorted Array" << endl;
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    return 0;
}