#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    printf("%c", str[0]);
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            i++;
            printf("%c. ", (str[i]));
        }
    }

    return 0;
}