#include<stdio.h>

int main()
{
    int array1[5] = {3,4,8,9,10};
    int array2[5] = {1,2,5,6};
    int array3[10];
    int size1 = 5, size2 = 4;


    int i, j, k;
    i = j = k = 0;
    while (i < size1 && j < size2)
    {
        if (array1[i] <= array2[j])
        {
            array3[k] = array1[i];
            i++;
        }
        else
        {
            array3[k] = array2[j];
            j++;
        }
        k++;
    }
    while (i < size1)
    {
        array3[k] = array1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        array3[k] = array2[j];
        j++;
        k++;
    }

    for (int ind = 0; ind < (size1 + size2); ind++)
    {
        printf("%d ", array3[ind]);
    }
    printf("\n");

    return 0;
}
