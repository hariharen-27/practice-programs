/*Write and demonstrate a C program to find all fractions 
with two-digit numerators and denominators for which “Sleepy’s” 
Technique work correctly*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,temp1,temp2,num1,num2,den1,den2;
    float actual,sleepy;
    printf("Sleepy Technique (11 to 99) :\n");
    printf("---------------------------------------------------------------------\n");
    for(i=11;i<=99;i++)
    {
        num2 = i%10;
        num1 = i/10;
        for(j=11;j<=99;j++)
        {
            den2 = j%10;
            den1 = j/10;
            actual = i/(float)j;

            if(num1==den2 || num2==den1)
            {
                if(num1==den2)
                    sleepy = num2/(float)den1;
                else
                    sleepy = num1/(float)den2;

                if(sleepy==actual)
                {
                    if(num1==den2)
                        printf("\nFraction : %d/%d Sleepy Division : %d/%d = %.2f Actual Division : %.2f \n",i,j,num2,den1,sleepy,actual);
                    else
                        printf("\nFraction : %d/%d Sleepy Division : %d/%d = %.2f Actual Division : %.2f \n",i,j,num1,den2,sleepy,actual);
                }
            }
        }
    }
    return 0;
}
