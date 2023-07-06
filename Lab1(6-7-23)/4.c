#include <stdio.h>

int main()
{
    int a, b, f;


    printf("Enter a value of a: ");
    scanf("%d", &a);

    printf("\nEnter a value of b: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {

        if (i == 1 || i == 0)
            continue;

        f = 1;

        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                f = 0;
                break;
            }
        }

        if (f == 1)
            printf("%d ", i);
    }

    return 0;
}
