//find the largest three element from array...

#include<iostream>
using namespace std;

int main()
{
    int n, first, second, third, arr[20];
    cout<<"Enter the Number of element: ";
    cin >> n;

    cout<< "Enter the array : ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    first=second=third=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third)
        {
            third=arr[i];
        }
    }
    cout <<"First largest number of array is: "<<first << endl;
    cout << "Second largest number of array is :"<< second << endl;
    cout <<"third largest number of array is :"<< third << endl;

    return 0;
}
