#include<stdio.h>

long fac(int n)
{
    long fac = 1;

    for(int i=1; i<=n; i++)
    {
        fac *=i;
    }
    return fac;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    long res = fac(num);
    printf("Factorial: %d", res);

    return 0;
}
