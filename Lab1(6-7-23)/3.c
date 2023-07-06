#include<stdio.h>
#include<string.h>

int main()
{

    char sent[30];
    printf("Enter String: ");
    scanf("%[^\n]s", sent);

    int first=0;
    int last=strlen(sent)-1;

    while(last>first)
    {
        if (sent [first++] != sent[last--])
        {
            printf("%s in not a palindrome\n", sent);
            return 0;
        }
    }
    printf("%s in a palindrome", sent);

    return 0;

}
