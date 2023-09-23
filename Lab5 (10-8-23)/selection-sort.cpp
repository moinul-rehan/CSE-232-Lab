#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_indx = i; // Initialize the index of the minimum element
    
        // Find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_indx])
                min_indx = j;
        }
    
        // Swap the found minimum element with the first element
        swap(&arr[min_indx], &arr[i]);
    }
}

int main()
{
    int arr[100], n; 
    cout << "Enter the number of values: \n";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    selection_sort(arr, n);
    
    cout << "The Sorted Values are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
