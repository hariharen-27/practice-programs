class Solutions {


    public static void main(String[] args){
        System.out.println(nthPosition(5));
    }
    static long nthPosition(long n){
        // code here
        if(n==1)return 1;

        return nthPosition(n/2)*2;
    }
}