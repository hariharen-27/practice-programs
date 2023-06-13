public class pattern9 {
    public static void main(String[] args){
        int n=7;
        n=2*n;
        for(int rows=1;rows<n;rows++){
            for(int cols=1;cols<n;cols++){
                int everyIndex=Math.min(Math.min(rows,cols),Math.min(n-rows,n-cols));
                System.out.print(everyIndex+" ");
            }
            System.out.println();

        }
    }
}   
