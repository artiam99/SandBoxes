package Package1;

public class Class3 { // Function Overriding

    static class parent
    {
        void show()
        {
            System.out.println("Parent");
        }
    }

    static class child extends parent // Multi inheritance in not possible in java ... extends a, b
    {
        void show()
        {
            System.out.println("Child");
        }
    }

    public static void main(String args[])
    {
        child obj = new child();
        parent ref = obj;
        ref.show(); // Child .. function overriding
    }
}
