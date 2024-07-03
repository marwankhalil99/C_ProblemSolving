/*  write a program to take even numbers from user and print the sum of them after each entry 
    if the user enters 2 odd number the program print "bye" and stopped.*/
#include<stdio.h>
int main(void)
{
    int num , sum = 0 , flag = 0;
    while(flag != 2)
    {
        printf("Enter Number : \n");
        fflush(stdout);
        scanf("%d",&num);
        if (num % 2 != 0)
        {
            flag++; 
        }
        else
        {
            sum = sum + num;
            printf("sum = %d\n",sum);
        }
    }
    printf("bye");
    return 0;
}
