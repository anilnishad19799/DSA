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

def minValFromTree(root):
    if root == None:
        return

    if root.left==None:
        return root.data
    
    return minValFromTree(root.left)

def maxValFromTree(root):
    if root == None:
        return
    if root.right==None:
        return root.data
    return maxValFromTree(root.right)

if __name__=='__main__':
    root = None
    print("Enter N value to be enter in BST :- ",end='')
    N = int(input())

    for _ in  range(N):
        val = int(input())
        root = createBSTTree(root, val)
    
    min_value = minValFromTree(root)
    print('min value from BST is ', min_value)

    max_value = maxValFromTree(root)
    print('max value from BST is ', max_value)    