/*Write a program that reads a positive integer and checks if it is a perfect square.*/
#include<stdio.h>
#include<math.h>

int main (void)
{
    int num , r;
    float chk;
    printf("Enter Number : \n");
    fflush(stdout);
    scanf("%d",&num);
    // chk = sqrt(num);
    // if(chk * chk == num)
    // {
    //     printf("Perfect SQRT");
    // }
    // else
    // {
    //     printf("Not Perfect SQRT");
    // }
     for(int i = 0; i <= num; i++)
    {
        if(num == i*i)
        {
            printf("%d is a perfect square", num);
            return 0;   // same as using break in this case to end the program
        }
    }
     printf("%d is not a perfect square", num);
    return 0;
}