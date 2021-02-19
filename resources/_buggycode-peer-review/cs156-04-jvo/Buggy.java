public class Buggy {
    static class Node {
        Node next;
        int val;
        
        public Node(int val, Node next) {
            this.val = val;
            this.next = next;
        }
    }
    
    public static Node constructLL() {
        Node four = new Node(4, null);
        Node three = new Node(3, four);
        Node two = new Node(2, three);
        Node one = new Node(1, two);
        
        return new Node(0, one);
    }
    
    public static void printLL(Node head) {
        for (Node traversal = head; traversal != null; traversal = traversal.next) {
            System.out.print(traversal.val + " ");
        }
        
        System.out.println();
    }
    
    /**
     * 
     * Reverses the LinkedList
     * 
     * @param head - LinkedList head node
     * @return new head to the reverse LinkedList
     */
    public static Node reverseLL(Node head) {
        Node previous = null;
        
        for (Node traversal = head; traversal != null; traversal = traversal.next) {
            traversal.next = previous;
            previous = traversal;
        }
        
        return previous;
    }
    
    public static void main(String[] args) {
        
        Node oldHead = constructLL();
        
        // Expected: 0 1 2 3 4
        // Actual: 0 1 2 3 4
        printLL(oldHead);
        
        Node reverseHead = reverseLL(oldHead);
        
        // Expected: 4 3 2 1 0
        // Actual: 0
        printLL(reverseHead);
        
    }
}