#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], c1, c2;
    int i;
    printf("Enter any sentence/word:\n ");
    gets(s);
    printf("Please enter any character you want to remove: \n ");
    c1 = getchar();
    getchar();
    printf("Enter the character which you want to replace it with %c", c1);
    c2 = getchar();
    printf("Original sentence/word \n '%s'\n", s);
    for (i = 0; s[i]; i++)
    {
        if (s[i] == c1)
        {
            s[i] = c2;
        }
    }
    printf("New sentence after replacement \n'%s'\n", s);
    return 0;
}