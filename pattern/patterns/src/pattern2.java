public class pattern2 {
    public static void main(String[] args){
        int n=5;
        for (int rows = 1; rows <= n ; rows++) {
            for (int cols = n; cols >=rows ; cols--) {
                System.out.print("*");


            }
            System.out.println();

        }
    }
}
