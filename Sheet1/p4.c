/*Write a program that take two numbers and multiply them without using * operation.*/
#include<stdio.h>

int main(void)
{
    int num1 , num2;
    long long Mul = 0;

    printf("Enter Number 1 : \n");
    fflush(stdout);
    scanf("%d",&num1);
    printf("Enter Number 2 : \n");
    fflush(stdout);
    scanf("%d",&num2);
    for (int i = 0 ; i < num2 ; i++ )
    {
        Mul += num1 ; 
    } 
    printf("%d * %d = %lu",num1,num2,Mul);
}

