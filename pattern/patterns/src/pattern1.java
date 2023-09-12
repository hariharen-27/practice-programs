import java.util.*;
public class pattern1 {
    public static void main(String[] args){
        int n=5;
        int original =n;
        n=2 * n;
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                int index=original-Math.min(Math.min(i,j),Math.min(n-i,n-j))+1;
                System.out.print(index+" ");
            }
            System.out.println();
        }
    }
    
}
