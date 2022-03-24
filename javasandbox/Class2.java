package Package1;

public class Class2 { // Function Overloading and Copy Constructor

    static class parent
    {
        int x, y; // These are created in stack
        static int z;
        parent() {}

        parent(int x, int y) // this is reference of current object
        {
            this.x = x;
            this.y = y;
        }

        parent(parent p)
        {
            this.x = p.x;
            this.y = p.y;
        }
    }

    public static void main(String args[])
    {
        parent a = new parent(1, 2); // object is built in heap only.
        parent b = new parent(a);
        parent c;
        c = a;
        parent.z = 10;
    }
}
