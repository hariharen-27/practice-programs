public class pattern13 {
    public static void main(String[] args){
        int n=5;
        for(int rows=1;rows<=n;rows++){
            int totalspaces=n-rows;
            for(int spaces=1;spaces<=totalspaces;spaces++){
                System.out.print("  ");

            }
            for(int cols=1;cols<=rows;cols++){
                System.out.print("* ");

            }
            System.out.println();
        }
    }
}
