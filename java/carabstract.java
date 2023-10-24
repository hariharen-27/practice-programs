abstract class implementation{
public abstract void function();

}
class acc extends implementation{
public void function(){
    System.out.println("accelaration");
}

}
class breaks extends implementation{
public void function(){
    System.out.println("breaks");
}
}


public class carabstract {
    public static void main(String[] args){
        implementation f1=new acc();
    implementation f2=new breaks();
    f1.function();
    f2.function();
    }
}
