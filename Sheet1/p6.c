/*Write a program that reads a positive integer and computes the factorial.*/
#include<stdio.h>
int fact(int num)
{
    if (num > 1 )
    {
        return fact(num - 1) * num;
    }
    return num;
}
int main (void)
{
    int num1 , fac  ;
    printf("Enter Number : \n");
    fflush(stdout);
    scanf("%d",&num1);
    fac = fact(num1);
    printf("Factorial is %d",fac);
}

