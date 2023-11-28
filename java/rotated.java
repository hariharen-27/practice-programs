import java.util.*;
public class rotated {
    public static void main(String[] args){
        int a[]={1,2,3,4,5,6,7,8,9};
        int k=4;
        k=k%a.length;
        
                reverse(a,0,k-1);
                reverse(a,k,a.length-1);
                reverse(a,0,a.length-1);
                System.out.println(Arrays.toString(a));
            
        
    }
    public static void reverse(int a[],int low,int high){
        while(low<high){
            int temp=a[low];
            a[low]=a[high];
            a[high]=temp;
            high--;
            low++;

        }
    }
}
