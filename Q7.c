#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Please enter the string \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0)
        {
            if ((str[i] >= 'a' && str[i] <= 'z'))
                str[i] = str[i] - 32;
            continue;
        }
        if (str[i] == ' ')
        {
            i++;
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
                continue;
            }
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }
    printf("First character of each word in capitalized form is\n%s\n", str);
    return 0;
}