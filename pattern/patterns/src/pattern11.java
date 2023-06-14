

public class pattern11 {
    public static void main(String[] args){
    int n=5;
    char a[]={'a','b','c','d','e'};
    for(int rows=1;rows<2*n;rows++){
        int totalCols=n>rows?rows:n-(rows-n);
        int totalSpaces=n-totalCols;
        for(int spaces=1;spaces<=totalSpaces;spaces++){
            System.out.print(" ");

        }
        for(int cols=1;cols<=totalCols;cols++){
            System.out.print(a[cols-1]+" ");
        }
        System.out.println();

    }
}
    
}