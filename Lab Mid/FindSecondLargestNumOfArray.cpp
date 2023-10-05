

#include<iostream>
using namespace std;

int main()
{
    int n, first, second, arr[10];

    cout<<"Enter the number of array: ";
    cin >> n;

    cout << "Enter the array element : ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    first=second=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second)
        {
            second = arr[i];
        }
    }
    cout << "Second largest number of array is: " << second << endl;
    return 0;
}