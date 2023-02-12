/*Given a number in decimal write a program to print the reverse of the number. For example,
the reverse of 3481 is 1843.*/

#include <stdio.h>
int main() {
    int num,temp,digit;
    
    printf("\nEnter the Number : ");
    scanf("%d",&num);
    
    temp = num;
    printf("\nReversed Number : ");
    while(temp!=0)
    {
        digit = temp%10;
        printf("%d",digit);
        temp = temp/10;
    }
    return 0;
}