#include<stdio.h>
int main(void)
{
    int num1 = 1 , num2 = 6;
    long long sum = 0;
    for (int i = num1 + 1 ; i < num2 ; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %lu",sum );
    return 0;
}