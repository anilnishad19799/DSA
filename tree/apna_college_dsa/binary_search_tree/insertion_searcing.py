class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

def createBinarySearchTree(root, val):
    
    if root == None:
        return Node(val)
    else:
        if val < root.data:
            root.left = createBinarySearchTree(root.left, val)
        else:
            root.right = createBinarySearchTree(root.right, val)

    return root

def searchFromTree(root, serarch_val):
    if root == None:
        return False
    elif root.data == serarch_val:
        return True
    elif serarch_val < root.data:
        return searchFromTree(root.left, serarch_val)
    else:
        return searchFromTree(root.right, serarch_val)


if __name__=='__main__':

    root = None
    print("Enter N value to be enter in Tree :- ", end='')
    n = int(input())
    for i in range(n):
        print("Enter the value")
        val = int(input())
        root = createBinarySearchTree(root, val)

    print("Enter value to be search :- ", end='')
    s_v = int(input())
    search_flag = searchFromTree(root, s_v)
    if search_flag:
        print("Value Found in tree")
    else:
        print('Value not found')
    