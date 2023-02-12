/*Find the sum of the series 
X+XX+XXX+ …..  upto  n terms. Where X and n are user inputs.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int X, n, sum, temp;

    printf("Enter the value of X : ");
    scanf("%d",&X);
    printf("Enter the value of n : ");
    scanf("%d",&n);

    temp = X;
    sum = 0;

    for(int i=1;i<=n;i++)
    {
        sum = sum+temp;
        temp = (temp*10) + X;
    }

    printf("\nSum of the Series : %d\n\n",sum);
    return 0;
}
