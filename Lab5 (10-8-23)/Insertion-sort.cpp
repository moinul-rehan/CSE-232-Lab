#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
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
    
    insertion_sort(arr, n);
    
    cout << "The Sorted Values are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
