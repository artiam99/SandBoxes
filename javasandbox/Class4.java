package Package1;

public class Class4 {  // Abstract Class and Interface

    static abstract class human // abstract keyword is required if bodyless method is needed.
    {
        public abstract void eat(); // abstract class cannot have body

        public void walk() // abstact class non-abstract menthod can have body.
        {

        }
    }

    static class men extends human
    {
        public void eat()
        {
            System.out.println("Men eating");
        }
    }

    static interface writer // Interface cannot have methods with body
    {
        int x = 10; // it will be treated as final
        public void write();
    }

    static interface ww
    {
        public default void write() // we can create body using default
        {
            System.out.println("ww");
        }
    }

    static class pen implements writer, ww // multiple interfaces can be implemented as no body for methods.
    {
        public void write() //
        {
            System.out.println("writtern by pen.");
        }
    }

    static class pencil implements writer // all methods in interface must be written in the class of overriding
    {
        public void write()
        {
            System.out.println("writtern by pencil.");
        }
    }

    static void doSomething(writer obj)
    {
        obj.write(); // obj is reference ... object cannot be created for interface.
    }

    public static void main(String args[])
    {
        human obj = new men();

        pen obj1 = new pen();
        pencil obj2 = new pencil();
        doSomething(obj1);
        doSomething(obj2);
    }
}
