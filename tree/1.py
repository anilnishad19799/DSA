class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def insert(root, key):
    if root is None:
        root = Node(key)
        return root
    
    if key < root.val:
        root.left = insert(root.left, key)
    else:
        root.right = insert(root.right, key)

    return root


if __name__=="__main__":
    root = None

    print("Enter n vaue to enter in bst tree")
    n = int(input())

    for i in range(n):
        key = int(input())
        root = insert(root, key)

    print(root.val)
        

