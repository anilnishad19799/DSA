# implement in binary tree

class Node:
    def __init__(self, val):
        self.key = val
        self.left = None
        self.right = None

def createTree():
    
    print("Enter value : ")
    val = int(input())
    
    if val == -1:
        return

    root = Node(val)

    print("Enter value in left tree")
    root.left = createTree()
    print("Enter value in right tree")
    root.right = createTree()

    return root
    

def createSubTree():
    print("Enter value : ")
    val = int(input())
    
    if val == -1:
        return

    root = Node(val)

    print("Enter value in left subtree")
    root.left = createTree()
    print("Enter value in right subtree")
    root.right = createTree()

    return root


if __name__=='__main__':
    root = createTree()
    sub_root = createSubTree()

    

