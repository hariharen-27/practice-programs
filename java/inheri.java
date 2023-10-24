class father {
    char gender = 'M';
    
}
class daughter extends father {
    char gender = 'F';
}
class son extends father {
    void print() {
    System.out.println(gender);
    }
}
public class inheri{
    public static void main(String[] args) {
        daughter ob1 = new daughter();
        son ob2 = new son();
        System.out.println(ob1.gender);
        System.out.println(ob2.gender); 
        ob2.print();
    }
}
