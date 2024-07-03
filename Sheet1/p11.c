/*Write a program to sum the digits in a decimal number -->  145 -> 1+4+5=10.*/
#include<stdio.h>
int main(void)
{
    int num , sum = 0;
    printf("Enter Number : \n");
    fflush(stdout);
    scanf("%d",&num);
    while (num != 0)
    {
        sum = (num % 10) + sum;
        num /= 10;
    }
    printf("%d",sum);
}