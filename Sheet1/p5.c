/*Write a program that take two numbers and calculate the reminder without using % operation.*/
#include<stdio.h>

int main(void)
{
    int num1 , num2 , rem , div ;
    printf("Enter Number 1 : \n");
    fflush(stdout);
    scanf("%d",&num1);
    printf("Enter Number 2 : \n");
    fflush(stdout);
    scanf("%d",&num2);
    div = num1 / num2;
    rem = num1 - (div * num2);
    printf("Reminder = %d",rem);
}