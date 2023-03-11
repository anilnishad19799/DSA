class Node:
    def __init__(self, val):
        self.key = val
        self.left = None
        self.right = None

def createTree():
    
    print("Enter value :- ")
    val = int(input())
    if val == -1:
        return
    
    root = Node(val)

    print("Enter value in left :- ")
    root.left = createTree()

    print("Enter value in right :- ")
    root.right = createTree()

    return root

def levelOrder(root):
    queue = [root]

    list1 = []
    while(len(queue)>0):
        curr = queue.pop(0)
        list1.append(curr.key)

        if curr.left!=None:
            queue.append(curr.left)

        if curr.right!=None:
            queue.append(curr.right)

    return list1

def mirror(root):
    if root==None:
        return
    else:
        mirror(root.left)
        mirror(root.right)

        temp = root.left
        root.left = root.right
        root.right = temp

    return root



if __name__=='__main__':
    root = createTree()
    list2 = levelOrder(root)
    print("list2",list2)
    root = mirror(root)
    list3 = levelOrder(root)
    print("list3",list3)