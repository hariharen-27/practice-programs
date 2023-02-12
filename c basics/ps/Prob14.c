#include<stdio.h>
#include<conio.h>

int main()
{
    int n1, n2, n3, i, j, k, count=0;

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

    printf("\nEnter the No of Elements in Array 3 : ");
    scanf("%d",&n3);
    int A3[n3];
    for(i=0;i<n3;i++){
        printf("\nArray 3[%d] : ",i+1);
        scanf("%d",&A3[i]);
    }

    printf("\n\nINTERSECTION OF THREE SORTED ARRAYS : ");
    i=0, j=0, k=0;
    while(i < n1 && j < n2 && k < n3) {
        if(A1[i]==A2[j] && A2[j]==A3[k]){
            printf("%d ", A1[i]);
            i++;
            j++;
            k++;
            count += 1;
        }
        else if(A1[i] < A2[j]){
            i++;
        }
        else if(A2[j] < A3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    if(count == 0){
        printf("No Elements are Common in Three Sorted Arrays");
    }
}