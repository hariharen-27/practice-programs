/*Write a C program to find a contiguous sub array with largest 
sum from the given array of numbers.*/
#include<stdio.h>

int main(){
    int arr[8] = {1,5,7,-5,-2,4,5,-1};
    int largest = arr[0];
    int m,n,i,j;
  for(i=0;i<8;i++){
      int sum=0;
    for(j=i;j<8;j++){
        sum+=arr[j];
        if(sum>largest){
            largest=sum;
            m=i;
            n=j;
        }
    }
  }

  printf("The largest sum is %d \n",largest);

  for(i=m;i<=n;i++){
    printf("%d ",arr[i]);
  }
}
