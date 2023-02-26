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

def height_of_tree(root):
    if root==None:
        return -1
    l_hei = height_of_tree(root.left)
    r_hei = height_of_tree(root.right)

    return max(l_hei, r_hei) + 1

if __name__=='__main__':
    root = None
    print("Enter n value in BST")
    n = int(input())
    for i in range(n):
        val = int(input())
        root = insert(root, val)
    
    height = height_of_tree(root)
    print("Height of tree ", height)
