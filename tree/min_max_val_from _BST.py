class Node:
    def __init__(self, val):
        self.left = None
        self.right = None
        self.key = val

def insert(root, val):
    if root == None:
        root = Node(val)
        return root

    if val < root.key:
        root.left = insert(root.left, val)
    else:
        root.right = insert(root.right, val)
    return root

def min_from_BST(root):
    if root is None:
        return 0
    if root.left is None:
        return root.key 
    a = min_from_BST(root.left)

    return a

# def min_from_BST(root):
#     if root is None:
#         return float('inf')
#     res = root.key
#     lres = min_from_BST(root.left)
#     rres = min_from_BST(root.right)
#     if lres < res:
#         res = lres
#     if rres < res:
#         res = rres
        
#     return res

def max_from_BST(root):
    if root==None:
        return 0
    if root.right == None:
        return root.key
    a=max_from_BST(root.right)
    return a

if __name__=="__main__":
    root = None

    print("Enter n value in Tree")
    n = int(input())
    for i in range(n):
        print("Enter value ")
        val = int(input())
        root = insert(root, val)

    min_val = min_from_BST(root)
    max_val = max_from_BST(root)

    print("min val from BST", min_val)
    print("max val from BST", max_val)