/*Write a C Program to accept a one dimensional array as input and 
arrange the elements such that it forms Mountain pattern of values. 
Mountain means we must move up from left to peak and move down to right.. 
The Peak value is at the middle.  */

#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int midValue = n/2;

    for(i=0;i<midValue;i++){
        printf("%d ",arr[i]);
    }

    for(i=n-1;i>=midValue;i--){
        printf("%d ",arr[i]);
    }
}
