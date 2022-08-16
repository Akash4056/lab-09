#include<stdio.h>
int fact(int);
void main()
{
    int n, x;
    printf("Entar a number: \n");
    scanf("%d" ,&n);
    x=fact(n);

    printf("Factorial is %d" ,x);
}
int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
