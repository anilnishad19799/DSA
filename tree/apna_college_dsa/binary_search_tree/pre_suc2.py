class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None
    
def createBSTTree(root, val):
    if root==None:
        return Node(val)
    
    if val < root.data:
        root.left = createBSTTree(root.left, val)
    else:
        root.right = createBSTTree(root.right, val)

    return root

def findPreSuc(root, find_val):
    succ = None
    pre = None
    pre_root = root
    while root!=None:
        if find_val >= root.data:
            root = root.right
        else:
            succ = root.data
            root = root.left

    while pre_root!=None:
        if find_val <= pre_root.data:
            pre_root = pre_root.left
        else:
            pre = pre_root.data
            pre_root = pre_root.right
    
    return succ, pre


if __name__=='__main__':
    root = None
    print("Enter N value to be enter in BST :- ",end='')
    N = int(input())

    for _ in  range(N):
        val = int(input())
        root = createBSTTree(root, val)

    print("Enter value to find succ")
    find_val = int(input())
    suc_val, pre_val = findPreSuc(root, find_val)
    print("succ value", suc_val, "pre_val", pre_val)
