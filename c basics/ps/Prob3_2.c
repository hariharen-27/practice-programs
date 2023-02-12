/*Write C program to convert Roman Numerals 
to Decimal numerals and vice-versa.*/

#include<stdio.h>
#include<string.h>

int value(char c)
{
    if(c=='I')
        return 1;
    else if(c=='V')
        return 5;
    else if(c=='X')
        return 10;
    else if(c=='L')
        return 50;
    else if(c=='C')
        return 100;
    else if(c=='D')
        return 500;
    else if(c=='M')
        return 1000;
    else
        return -1;
}

int romanToDecimal(char str[])
{
    int res = 0;
    for(int i=0;i<strlen(str);i++)
    {
        int s1 = value(str[i]);
        if(i+1 < strlen(str))
        {
            int s2 = value(str[i+1]);
            if(s1>=s2)
                res = res+s1;
            else
            {
                res = res+s2-s1;
                i++;
            }
        }
        else
        {
            res = res+s1;
        }
    }
    return res;
}

int main()
{
    char str[20];
    printf("\nEnter the Roman Numerals : ");
    gets(str);
    int dec = romanToDecimal(str);
    printf("\nDecimal Number : %d",dec);
    return 0;
}