#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, num;
    char name[20][10], t_name[15][10], temp[20];
    printf("Please enter how many number of names to be sorted in alphabetical order\n");
    scanf("%d", &num);
    printf("Please enter %d names one by one\n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%s", name[i]);
        strcpy(t_name[i], name[i]);
    }
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Names after sorting in alphabetical order\n");
    for (i = 0; i < num; i++)
    {
        printf("%s\n", name[i]);
    }
}