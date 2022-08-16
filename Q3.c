#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;
    char chutiya[20];
    printf("Enter the String to get reverse string: \n");
    gets(chutiya);
    //scanf("%s",chutiya);
    n = strlen(chutiya);
    printf("\nReversed string is \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", chutiya[i]);
    }
    return 0;
}