#include <stdio.h>

void ConStr(const char* str1, const char* str2, char* res) {
    int i = 0; int j = 0;
    while (str1[i] != '\0') {
        res[i] = str1[i];
        i++;
    }

    res[i] = ' ';
    i++;

    while (str2[j] != '\0') {
        res[i] = str2[j];
        i++;
        j++;
    }

    res[i] = '\0';
}

int main() {
    char str1[15], str2[15], res[30];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    ConStr(str1, str2, res);

    printf("%s\n", res);

    return 0;
}
