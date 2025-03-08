package hello;
import java.util.*;
public class LinkedListExample {  
    public static void main(String[] args) {  
        Queue<Book> queue=new PriorityQueue<Book>();  
        //Creating Books  
        Book b1=new Book(121,"Let us C","Yashwant Kanetkar","BPB",8);  
        Book b2=new Book(233,"Operating System","Galvin","Wiley",6);  
        Book b3=new Book(101,"Data Communications & Networking","Forouzan","Mc Graw Hill",4);  
        Book b4=new Book(103,"Digital electronics","Veerakumar","Mc Graw Hill",4); 
        //Adding Books to the queue  
        queue.add(b1);  
        queue.add(b2);  
        queue.add(b3);  
        queue.add(b4);
        System.out.println("Traversing the queue elements:");  
        //Traversing queue elements  
        for(Book b:queue){  
        System.out.println(b.id+" "+b.name+" "+b.author+" "+b.publisher+" "+b.quantity);  
        }  
        queue.remove();  
        System.out.println("After removing one book record:");  
        for(Book b:queue){  
            System.out.println(b.id+" "+b.name+" "+b.author+" "+b.publisher+" "+b.quantity);  
            }  
    }  
    }  

