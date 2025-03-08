package main

import (
	"fmt"
)

type Node struct {
	data int
	next *Node
}

func push(head **Node, dataToBeAdded int) {
	newNode := new(Node)
	newNode.data = dataToBeAdded
	newNode.next = (*head)
	(*head) = newNode
}
func printLinkedList(head **Node) {
	temp := *head
	for temp != nil {
		fmt.Print(temp.data, " ")
		temp = temp.next
	}
}
func main_1() {
	fmt.Println("hello")
	head := new(Node)
	head.data = 1
	head.next = nil
	push(&head, 2)
	push(&head, 3)
	push(&head, 4)
	printLinkedList(&head)

	fmt.Println()

	deleteElementFromLinkedList(head, 3)
	printLinkedList(&head)

}

func deleteElementFromLinkedList(head *Node, dataToBeDeleted int) {
	if head == nil {
		return
	} else if head.next == nil {
		return
	}
	temp := head
	for temp != nil {
		if temp.next.data != dataToBeDeleted {
			temp = temp.next
		} else {
			temp.next = temp.next.next
			break
		}
	}
}
