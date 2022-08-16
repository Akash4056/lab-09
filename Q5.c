#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i, v = 0, c = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Total number of vowel in the sentence: %d\n", v);
    printf("Total number of consonant in the sentence: %d\n", c);
    return 0;
}