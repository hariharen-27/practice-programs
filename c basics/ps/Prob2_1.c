/*Write a program that, given a positive integer n,
determines the integer t with the property that 2t-1<=n<2t.
This integer t is called the bit-length of n.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num, B[100], temp, count = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    temp = num;
    for(int i=0;temp>0;i++)
    {
        B[i] = temp%2;
        temp = temp/2;
        count += 1;
    }
    printf("\nDecimal Number : %d",num);
    printf("\nBinary Number : ");
    for(int i=count-1;i>=0;i--)
        printf("%d",B[i]);

    if((pow(2,count))-1<=num && num<(pow(2,count)))
    {
        printf("\nSatisfied : %d",num);
    }
    else
    {
        printf("\nNot Satified");
    }
    return 0;
}