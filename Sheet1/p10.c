/*Write a program that reads a positive integer and check if this number is a base of 2 like 1,2,4,8,16,32, 64...*/
#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter Number : \n");
    fflush(stdout);
    scanf("%d",&num);
    if(/*(num & (num - 1)) == 0*/!(num & (num - 1)))
    {
        printf("Enter Is BASE OF TWO : \n");
    }
    else{
        printf("Enter Is NOT BASE OF TWO : \n");
    }
    return 0;
}