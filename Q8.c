#include <stdio.h>
#include <string.h>
int main()
{
    char n[100], m[10][20], rev[10][20];
    int i, j = 0, k = 0;
    printf("Input the string : ");
    gets(n);
    for (i = 0; n[i]; i++)
    {
        if (n[i] == ' ')
        {
            m[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            m[k][j] = n[i];
            j++;
        }
    }
    m[k][j] = '\0';
    for (i = 0; i <= k; i++)
    {
        strcpy(rev[i], strrev(m[i]));
    }
    for (i = 0; i <= k; i++)
    {
        printf("%s ", rev[i]);
    }
    return 0;
}