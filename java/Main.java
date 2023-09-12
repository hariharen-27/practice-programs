// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Main {
    static public void main(String args[])
{
    int[] arrr = { 3, 6, 7, 11 };
    int H = 8;
     
    // Function Call
    int count=1;
    
    while(true){
int[] arr=arrr.clone();
        for(int i=0;i<arr.length;i++){
                                    // System.out.println("count"+arr[i]);
                                    
                                    System.out.println("arr"+arr[i]);

                                    System.out.println("mod"+(arr[i]%count));

            arr[i]=arr[i]+(arr[i]%count);

                        System.out.println("arr"+arr[i]);

            
        }
        int res=0;
        for(int i=0;i<arr.length;i++){
            int temp=arr[i]/count;
            
            System.out.println(count+"arr"+arr[i]);
            res+=temp;
        }
        if(res<=H){
            System.out.println(count);
            break;
            
        }
        else{
            count++;
            continue;
        }
    }
}
}

