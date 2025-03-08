class BinaryTree:
    #data=None
    #left=None
    #right=None
    def __init__(self, data):
        self.data=data
        self.left = None
        self.right = None
    def printTree(self):
        print(self.data)

Node = BinaryTree(1)
Node.left = BinaryTree(2)
Node.right = BinaryTree(3)


Node.printTree()
Node.left.printTree()
Node.right.printTree()
