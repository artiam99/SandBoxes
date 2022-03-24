package Package1;

import java.util.*;


public class Class6 {

    public static class Pairs implements Comparable<Pairs>
    {
        int first, second;
        Pairs(int first, int second)
        {
            this.first = first;
            this.second = first;
        }
        public int compareTo(Pairs p)
        {
            return Integer.compare(this.second, p.second); // Integer.compare(p.second, this.second); ... DESC
        }
    }

    static class comp implements Comparator<Pairs>
    {
        public int compare(Pairs p1, Pairs p2)
        {
            return Integer.compare(p1.second, p2.second);
        }
    }

    public static void main(String args[])
    {
        // ArrayList
        ArrayList<Integer> al = new ArrayList<>();
        al.add(1);
        al.add(2);
        al.add(3);
        System.out.println(al); // [1, 2, 3]
        al.remove(2);
        System.out.println(al); // [1, 2]
        Collections.sort(al);
        al.add(1, 100);
        System.out.println(al); // [ 1, 100, 2]
        for(int i = 0 ; i < al.size() ; i++)
        {
            System.out.println(al.get(i));
        }
        for(Integer i: al)
        {
            System.out.println(i);
        }



        // ArrayList Sort by Pairs
        ArrayList<Pairs> pl = new ArrayList<Pairs>();
        pl.add(new Pairs(1,2));
        pl.add(new Pairs(2,2));
        pl.add(new Pairs(3,1));
        pl.add(new Pairs(88,5));
        pl.add(new Pairs(2,353));

        Collections.sort(pl);
        for(int j=0;j<al.size();j++){
            System.out.println(pl.get(j).first+" "+pl.get(j).second);
        }



        // List
        List<Integer> ll = new ArrayList<Integer>(); // List is ancestor of ArrayList, so all operations are same.



        // Stack
        Stack<Integer> st = new Stack<Integer>();
        st.push(1);
        st.push(2);
        st.push(3);
        st.pop();
        System.out.println(st.peek());
        while(st.isEmpty() == false)
        {
            System.out.println(st.pop());
        }



        // Queue
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(1);
        q.add(2);
        q.add(3);
        System.out.println(q.peek());
        while(q.isEmpty() == false)
        {
            System.out.println(q.poll());
        }



        // Deque
        Deque<Integer> dq = new LinkedList<Integer>();
        dq.add(1);
        dq.add(2);
        dq.addFirst(100);
        System.out.println(dq.peekFirst());
        System.out.println(dq.peekLast());
        while(q.isEmpty() == false)
        {
            System.out.println(dq.pollFirst());
            if(q.isEmpty() == false)
                System.out.println(dq.pollLast());
        }



        // Priority Queue
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        PriorityQueue<Integer> pq1 = new PriorityQueue<>(Collections.reverseOrder());
        PriorityQueue<Pairs> pq2 = new PriorityQueue<>(new comp());
        pq.add(1);
        pq.add(3);
        pq.add(2);
        System.out.println(pq.peek());
        while(pq.isEmpty() == false)
        {
            System.out.println(pq.poll());
        }



        // Tree Set
        TreeSet<Integer> ts = new TreeSet<>();
        ts.add(1);
        ts.add(2);
        ts.add(2);
        ts.remove(1);
        System.out.println(ts);
        System.out.println(ts.contains(2));
        for(Integer i: ts)
        {
            System.out.println(i);
        }



        // Hash Map
        HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
        hm.put(1, 2);
        hm.put(1, 3);
        System.out.println(hm.get(1));
        for(Map.Entry<Integer, Integer> en : hm.entrySet())
        {
            System.out.println(en.getValue());
            System.out.println(en.getKey());
        }
    }
}
