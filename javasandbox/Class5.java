package Package1;

public class Class5 {  // Multithreading

    static class hi extends Thread
    {
        public void run()
        {
            for(int i = 1; i <= 5; i++)
            {
                System.out.println("hi");
                try { Thread.sleep(1000); } catch(Exception e) {}
            }
        }
    }
    static class hello extends Thread
    {
        public void run()
        {
            for(int i = 1; i <= 5; i++)
            {
                System.out.println("hello");
                try { Thread.sleep(1000); } catch(Exception e) {}
            }
        }
    }

    public static void main(String args[])
    {
        hi obj1 = new hi();
        hello obj2 = new hello();

        obj1.start();
        try { Thread.sleep(10); } catch(Exception e) {}
        obj2.start();
    }
}
