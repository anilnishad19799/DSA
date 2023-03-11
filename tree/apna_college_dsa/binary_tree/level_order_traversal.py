class Node:
    def __init__(self, val):
        self.key = val
        self.left = None
        self.right = None


def createTree():

    print("Enter value ")
    val = int(input())

    if val == -1:
        return 
    
    root = Node(val)

    print("Enter data in left Node")
    root.left = createTree()

    print("Enter data in Right Node")
    root.right = createTree()

    return root

def getHeight(root):
    if root == None:
        return -1
    
    lhei = getHeight(root.left)
    rhei = getHeight(root.right)

    return max(lhei, rhei) + 1

def printCurrentNode(root, level):
    pass

    if root == None:
        return
    
    if level==1:
        print(root.key,"")
    elif(level>1):
        printCurrentNode(root.left, level-1)
        printCurrentNode(root.right, level-1)


def level_order_traversal(root):
    print("Find height of tree")
    height = getHeight(root)

    print("height of tree is ", height)

    for i in range(1, height+2):
        printCurrentNode(root, i)

if __name__=='__main__':
    print("hii")
    root = createTree()
    level_order_traversal(root)