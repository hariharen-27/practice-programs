// Abstract Class declared
abstract class Animal {
    private String name;
 
    public Animal(String name) { this.name = name; 
    System.out.println("animal constructor");}
 
    public abstract void makeSound1();
        public abstract void makeSound();
    public String getName() { return name; }
}
 
// Abstracted class
class Dog extends Animal {
    public Dog(String name) { super(name); System.out.println("dog constructor");}
 
    public void makeSound()
    {
        System.out.println(getName() + " barks");
    }
     public void makeSound1()
    {
        System.out.println(getName() + " 1  barks");
    }
}
 
// Abstracted class
class Cat extends Animal {
    public Cat(String name) { super(name); }
 
    public void makeSound()
    {
        System.out.println(getName() + " meows");
    }
     public void makeSound1()
    {
        System.out.println(getName() + " barks");
    }
}
 
// Driver Class
public class abstracts {
    // Main Function
    public static void main(String[] args)
    {
        Animal myDog = new Dog("Buddy");
       // Animal myCat = new Cat("Fluffy");
 
        myDog.makeSound1();
       // myCat.makeSound();
    }
}
