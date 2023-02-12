/*Write a C function that has three positive integer arguments 
n, m, k and returns the third largest integer p, p <= k, such that 
p divides both n and m. It returns 0 if there is no such third largest p > 0. 
For example, n = 200, m = 100, k = 80, result is 20. Again, if n = 35, m = 25, 
k = 18, then the result is 0. Do not use arrays or any library functions other 
than standard input and output. Write the function and the main program. 
In the main program, read the inputs, call the function and print the result.*/

#include<stdio.h>
#include<math.h>

int fun_call(int n, int m, int k)
{
    int temp = 0, count = 0;
    for(int i=k;i>=1;i--)
    {
        if(n%i==0 && m%i==0)
        {
            count += 1;
        }
        if(count==3)
        {
            temp = i;
            break;
        }
    }
    return temp;
}

int main()
{
    int a,b,c;
    printf("Enter the Three Numbers : ");
    scanf("%d %d %d",&a, &b, &c);
    printf("Result : %d",fun_call(a,b,c));
    return 0;
}