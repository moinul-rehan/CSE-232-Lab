#include<stdio.h>

int main()
{
    int arr[10] = {5, 3, 2, 6, 9, 10};
    int size = 6, pos = 1;

    for (int i = size; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = 20;

    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
