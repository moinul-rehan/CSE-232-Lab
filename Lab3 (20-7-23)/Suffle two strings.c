#include <stdio.h>

void shuffleStr(const char* str1, const char* str2, char* result) {
    int i, j, k;
    i = j = k = 0;

    while (str1[i] != '\0' || str2[j] != '\0') {
        if (str1[i] != '\0') {
            result[k] = str1[i];
            i++;
            k++;
        }
        if (str2[j] != '\0') {
            result[k] = str2[j];
            j++;
            k++;
        }
    }

    result[k] = '\0';
}

int main() {
    const char str1[] = "Sakib";
    const char str2[] = "Hasan";
    char result[15];

    shuffleStr(str1, str2, result);

    printf("str3 = \"%s\"\n", result);

    return 0;
}
