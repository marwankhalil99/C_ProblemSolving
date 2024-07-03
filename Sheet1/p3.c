/*Write a program to take numbers from user and calculate the sum of them (let users choose the No of numbers.*/
#include<stdio.h>

int main (void)
{
    int i , num;
    long long sum = 0;

    printf("Enter Number Of Numbers : \n");
    fflush(stdout);
    scanf("%d",&i);
    for (int j = 0 ; j < i ; j++)
    {
        printf("Enter Num %d : \n",j+1);
        fflush(stdout);
        scanf("%d",&num);
        sum = sum + num; 
    }
    printf("sum = %lu",sum);
}