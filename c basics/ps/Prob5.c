/*Consider an array of numbers from 1 to N.
In this array, one of the numbers gets duplicated 
and one is missing.Write a C program to find out the duplicated number. 
Condition: Using only one loop and without any extra memory.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, sum_num, num_mis, duplicate, sum_arr=0;
    printf("\nEnter the value of N : ");
    scanf("%d",&n);
    int A[n];
    for(int k=0; k<n;k++)
    {
        printf("Number (between 1 to %d) A[%d] : ",n,k+1);
        scanf("%d",&A[k]);
        sum_arr += A[k];
    }

    sum_num = (n*(n+1))/2;
    for(int i=1;i<=n;i++)
    {
        if(A[i-1]!=i)
        {
            duplicate = i-1;
            break;
        }
    }
    num_mis = sum_num - (sum_arr - duplicate);
    printf("\nSum of %d Natural Numbers : %d",n,sum_num);
    printf("\nSum of Array : %d",sum_arr);
    printf("\nDuplicated Element : %d",duplicate);
    printf("\nMissing Number : %d",num_mis);
    return 0;
}
