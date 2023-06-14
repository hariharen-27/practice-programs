public class pattern12 {
    public static void main(String[] args){
        int n=5;
        for (int rows=1;rows<=n;rows++){
            for(int cols=1;cols<=n;cols++){
                int a;
                a=rows==cols?cols:0;
                System.out.print(a+" ");
            }
            System.out.println();
        }
    }
}
