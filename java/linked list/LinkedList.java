
public class LinkedList {
    Node head;
    static class Node {
        int data;
        Node next;
        
        Node(int a){
            data=a;
            next=null;
        }
    }
    
    public static LinkedList insert(LinkedList list, int data){
        Node new_node = new Node(data);
        if(list.head == null){
            list.head=new_node;

        }
        else{
            Node last=list.head;
            while(last.next!=null){
                last = last.next;

            }
            last.next=new_node;
        }
        return list;
        }

    public static void printList (LinkedList list){
        Node currNode=list.head;
        System.out.println("Linked list is :");
        while(currNode!=null){
            System.out.println(currNode.data);
            currNode=currNode.next;
        }

    }
    
    public static void main(String[] args){
        LinkedList list =new LinkedList();
        list=insert(list,1);
        list=insert(list,2);
        list=insert(list,4);
        printList(list);


    }
    
    
}
