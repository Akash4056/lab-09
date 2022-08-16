#include <stdio.h>
int test(int n, int a);
int fibonacci(int);
int main()
{
    int n, a;
    printf("\n");
    printf("Enter the number of element you want in series : ");
    scanf("%d", &n);
    printf("Enter the number you want to test either it is in Fibonacci Series or not: ");
    scanf("%d", &a);
    printf("\n");
    printf("Fibonacci series is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    test(n, a);
} 
// Testing whether the number is in fibonacci series or not
int test(int n, int a)
{
    int c;
    for (int i = 0; i < n; i++)
    {
        if (a == fibonacci(i))
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        printf("\n%d is in fibonacci series\n\n", a);
    }
    else
    {
        printf("\nOpps!! %d is not in fibonacci series\n", a);
    }
} 
// Fibonacci series using recursive function
int fibonacci(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}