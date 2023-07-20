
#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Sakib Ullah Hasan";
    const char pattern[] = "Ullah";

    int index = SubStr(str, pattern);

    if (index != -1) {
        printf("index at %d.\n", index);
    } else {
        printf("Pattern not found.\n");
    }

    return 0;
}

int SubStr(const char* str, const char* pattern) {
    int len_str = strlen(str);
    int len_pattern = strlen(pattern);

    for (int i = 0; i <= len_str - len_pattern; i++) {
        int j;
        for (j = 0; j < len_pattern; j++) {
            if (str[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == len_pattern) {
            return i;
        }
    }

    return -1;
}
