#include<stdio.h>
#include<conio.h>

int main()
{
    int n1, n2, i, j, count=0;

    printf("\nEnter the No of Elements in Array 1 : ");
    scanf("%d",&n1);
    int A1[n1];
    for(i=0;i<n1;i++){
        printf("\nArray 1[%d] : ",i+1);
        scanf("%d",&A1[i]);
    }

    printf("\nEnter the No of Elements in Array 2 : ");
    scanf("%d",&n2);
    int A2[n2];
    for(i=0;i<n2;i++){
        printf("\nArray 2[%d] : ",i+1);
        scanf("%d",&A2[i]);
    }

    printf("\nArray 1 : ");
    for(i=0;i<n1;i++){
        printf("%d ",A1[i]);
    }

    printf("\nArray 2 : ");
    for(j=0;j<n2;j++){
        printf("%d ",A2[j]);
    }

    printf("\n\nINTERSECTION OF TWO SORTED ARRAYS : ");
    i=0, j=0;
    while(i < n1 && j < n2) {
        if(A1[i]==A2[j]){
            printf("%d ", A1[i]);
            i++;
            j++;
            count += 1;
        }
        else if(A1[i] < A2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    if(count == 0){
        printf("No Elements are Common in Both Arrays");
    }
}