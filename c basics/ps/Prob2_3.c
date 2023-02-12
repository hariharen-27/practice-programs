/*Write a program that does the following: Read a string of
0's and 1's and print the decimal equivalent of the string 
treated as an integer in the binary representation.*/

#include <stdio.h>
#include <math.h>

int main() {
    char Bnum[100];
    int count, i, j, sum=0;
    char temp='0';
    
    printf("\nEnter the Binary Number with 0's and 1's : ");
    gets(Bnum);
    
    for (count=0; Bnum[count]!='\0'; ++count);
    for(i=count-1, j=0; i>=0; i--, j++)
    {
        sum = sum + (((int)Bnum[i]-(int)temp)*pow(2,j));
    }
    
    printf("\nBinary Number : %s",Bnum);
    printf("\nDecimal Number : %d",sum);
    return 0;
}
