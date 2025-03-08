package hello;

public class singlyLinkedListImplementation {
	static class Node {
		int data;
		Node next;
		Node(int data) {
			this.data = data;
			this.next = null;
		}
		static void display(Node node) {
			while(node != null) {
				System.out.print(node.data + " ");
				node = node.next;
			}
		}
	}
	public static void main(String []args) {
		Node n1 = new Node(1);
		Node n2 = new Node(2);
		Node n3 = new Node(3);
		n1.next = n2;
		n2.next = n3;
		Node.display(n1);
	}
}