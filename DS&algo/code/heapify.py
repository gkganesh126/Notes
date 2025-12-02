# To heapify a subtree 
def heapify(arr, n, i):
    
    # Initialize largest as root
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    # If left child is larger than root
    if l < n and arr[l] > arr[largest]:
        largest = l

    # If right child is larger than largest so far
    if r < n and arr[r] > arr[largest]:
        largest = r

    # If largest is not root
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]

        # Recursively heapify the affected sub-tree
        heapify(arr, n, largest)

# Function to build a Max-Heap from the given array
def buildHeap(arr):
    n = len(arr)
    
    # Index of last non-leaf node
    startIdx = (n // 2) - 1

    # Perform reverse level order traversal
    # from last non-leaf node and heapify
    # each node
    for i in range(startIdx, -1, -1):
        heapify(arr, n, i)

if __name__ == "__main__":
    # Binary Tree Representation
    # of input array
    #             1
    #           /    \
    #         3        5
    #       /  \     /  \
    #     4      6  13  10
    #    / \    / \
    #   9   8  15 17
    arr = [1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17]
    n = len(arr)
    print("input: ", arr)
    
    # Function call
    buildHeap(arr)

    for i in range(n):
        print(arr[i], end=" ")
    print()

    # Final Heap:
    #              17
    #            /    \
    #          15      13
    #         /  \     / \
    #        9     6  5   10
    #       / \   / \
    #      4   8 3   1
