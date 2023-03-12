class Node:
    def __init__(self, val):
        self.left = None
        self.right = None
        self.key = val

def insert(root, val):
    if root==None:
        root = Node(val)
        return root

    if val < root.key:
        root.left = insert(root.left, val)
    else:
        root.right = insert(root.right, val)
    
    return root

def inorder(root):
    if root is None:
        return

    inorder(root.left)
    print("data",root.key)
    inorder(root.right)

def preorder(root):
    if root is None:
        return

    print("data",root.key)
    preorder(root.left)
    preorder(root.right)

def postorder(root):
    if root is None:
        return
    postorder(root.left)
    postorder(root.right)
    print("data",root.key)


if __name__=='__main__':
    root = None
    print("Enter n value in BST")
    n = int(input())
    for i in range(n):
        val = int(input())
        root = insert(root, val)
    
    print("Inorder")
    inorder(root)
    print("Preorder")
    preorder(root)
    print("Postorder")
    postorder(root)
