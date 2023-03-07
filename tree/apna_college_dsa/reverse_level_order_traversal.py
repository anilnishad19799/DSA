class Node:
    def __init__(self, val):
        self.key = val
        self.left = None
        self.right = None


def createTree():

    print("Enter value")
    val = int(input())

    if val==-1:
        return
    
    root = Node(val)

    print("Enter left Node ")
    root.left = createTree()
    print("Enter Right Node ")
    root.right = createTree()

    return root

def getHeightTree(root):
    
    if root==None:
        return -1
    
    l_hei = getHeightTree(root.left)
    r_hei = getHeightTree(root.right)

    return max(l_hei, r_hei) + 1


def printReverseCurrentNode(root, level):
    if root == None:
        return

    if level==1:
        print(root.key, "")
    elif(level>1):
        printReverseCurrentNode(root.left, level-1)
        printReverseCurrentNode(root.right, level-1)

# def reverseLevelOrder(root):
#     # print("Get height of tree")
#     height = getHeightTree(root)
#     print("height of tree is ", height)

#     # for  i in reversed(range(1, height+2)):
#     for  i in range(height+2, 0, -1):
#         printReverseCurrentNode(root, i)

def reverseLeveOrder2(root):
    queue = [root]
    queue2 = [
        
    ]

    # curr_node = root
    try:
        while len(queue)>0:

            curr_node = queue.pop(0)
            print("Curr node", curr_node.key)
            queue2.insert(0, curr_node.key)
            
            if root.right is not None:
                queue.append(curr_node.right)

            if root.left is not None:
                queue.append(curr_node.left)
    except:
        pass

    return queue2

if __name__=='__main__':
    root = createTree()
    ## using level order method 1
    # reverseLevelOrder!(root)

    ## using level order method 2
    print(reverseLeveOrder2(root))