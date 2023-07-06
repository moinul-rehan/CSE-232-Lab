#include<stdio.h>

int FindLN(int array[], int size)
{
    int largest = array[0];

    for(int i=1; i<size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    return largest;
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }


    int largestNumber = FindLN(array, size);
    printf("The largest Number is: %d", largestNumber);

    return 0;
}
