public class pattern5  {
    public static void main(String[] args){
        int n=5;
        for (int rows = 1; rows < 2*n; rows++) {
            int totalRows=  n>rows ? rows : n-(rows-n);
            for (int cols=1;cols<=totalRows;cols++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
//totalRows = n>rows ? rows : n-(rows-n);
