package Package1;

import java.util.Scanner;

public class Class1 { // classes can be inherited from different packages.

    // Access modifier-
    // public - accessible everywhere
    // default - accessible in same package
    // protected - accessible in sub classes
    // private - accessible inside the class only

    static class Node // static is used coz this class is used in static function and this class in usable in Class1.
    {
        int data;
        Node next;
        Node(int x)
        {
            data = x;
            next = null;
        }
    }

    public static void main(String args[])
    {
//         Primitive Data types
//         char, byte, short, int, float, long double, boolean

//        Intput: 1 2.1 a  in   a, b, c
//        int a; double b; char c;
//        Scanner sc = new Scanner(System.in);
//        a = sc.nextInt();
//        b = sc.nextDouble();
//        c = sc.next().charAt(0);

//        Input: adfadfadfa    in    str
//        String str;
//        str = sc.nextLine();

//        Input: afadfadf adfadfaf    in   str1 and str2
//        String str1, str2;
//        str1 = sc.next(); str2 = sc.next();

//        long a = 10; int b = a; ... error ... type cast required ... int b = (int)a; from higher data type.

//        int a[] = new int[50];
//        for(int i = 0 ; i < 50 ; i++)
//            a[i] = sc.nextInt();

//        int a[] = new int[20];
//        int b[] = a; // If b is changed a will change as well.

//        Linked List
//        Node head = new Node(1);
//        head.next = new Node(2);
//        Node h = head;
//        while(h != null)
//        {
//            System.out.println(h.data);
//            h = h.next;
//        }

//        final double pi = 3.14; // similar to const
    }
}
