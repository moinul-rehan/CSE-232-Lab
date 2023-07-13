#include<stdio.h>

int main()
{
    int arr[10] = {1, 3, 4, 5, 6, 8, 9, 15, 19, 20};
    int size = 10, low = 0, high = 9;
    int key = 8;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Found\n");
            return 0;
        }
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("Not Found\n");

    return 0;
}
