#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    for (int j=0; j<n-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

int main()
{
int arr[100], n; 
cout<<"Enter the number of value: \n";
cin >> n;
for(int i=0; i<n; i++)
{
    cin>> arr[i];
}
bubble_sort(arr, n);
cout << "The Sorted Values are : ";
for(int i=0; i<n; i++)
{
    cout<< arr[i];
    cout << " ";
}

return 0;
}