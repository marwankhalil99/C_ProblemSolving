/*Write a program to take numbers from user and find the max and min from them (let users choose the No of numbers.*/
#include<stdio.h>
#define ARRAY_SIZE 20
void swap(int * s1 , int * s2)
{
    int x = *s1;
    *s1 = *s2;
    *s2 = x;
}
void max_min_arr(int * array ,int NoElement ,int * max , int * min)
{
    /*Bubble Sort*/
    for (int i = 0 ; i < NoElement - 1 ; i++)
    {
        for (int j = 0 ; j < NoElement - 1 - i ; j++)
        {
            if (array[j] > array[j+1] )
            {
                swap(&array[j] , &array[j+1]);
            }
        }
    }
    *max = array[NoElement-1];
    *min = array[0];
}
int main (void)
{
    int arr[ARRAY_SIZE] = {0};
    int i , max , min ;
    printf("Enter Number Of Numbers : \n");
    fflush(stdout);
    scanf("%d",&i);
    for (int j = 0 ; j < i ; j++)
    {
        printf("Enter Num %d : \n",j+1);
        fflush(stdout);
        scanf("%d",&arr[j]); 
    }
    max_min_arr(arr,i,&max,&min);
    printf("Max = %d\n",max);
    fflush(stdout);
    printf("Min = %d\n",min);
    return 0;
}