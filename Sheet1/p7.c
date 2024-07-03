/*Write a program that reads a positive integer and checks if it is a prime.*/
#include<stdio.h>
int main(void)
{
    int num ;
    printf("Enter Number : \n");
    fflush(stdout);
    scanf("%d",&num);
    if((num % 2 != 0 ) && ( num%3 != 0 ) && (num != 1 ) || (num == 2 || num == 3 ) )
    {
        printf("Num is Prime !");
    }
    else 
    {
        printf("Num is Not prime");
    }
}
