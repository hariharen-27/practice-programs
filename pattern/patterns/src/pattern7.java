public class pattern7 {
    public static void main(String[] args){
    int n=5;
    for(int rows=1;rows<=n;rows++){
        int totalSpaces=n-rows;
        for(int spaces=1;spaces<= totalSpaces;spaces++){
            System.out.print("  ");
        }
        for(int cols=rows;cols>=1;cols--){
            System.out.print(cols+" ");
        }
        for(int cols=2;cols<=rows;cols++){ 
            System.out.print(cols+ " ");
        }
        System.out.println();
    }
}
}
