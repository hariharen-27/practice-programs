class abzoho{
public static void main(String[] args){
 String str="1c0c1c1a0b1";

 char str1[]=str.toCharArray();

 int ans =(int)str1[0]-48;
 for(int i=1;i<str.length();i+=2)
 {
    if(str1[i]=='a')
      ans=ans && (int)str1[i+1];
    else if(str1[i]=='b')
      ans=ans || ((int)str1[i+1]);
    else
      ans=ans ^((int)str1[i+1]);

 }
System.out.println(ans);
}
}