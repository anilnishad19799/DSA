class Node:
    def __init__(self, val):
        self.key = val
        self.left = None
        self.right = None

def createTree():
    
    print("Enter value : ")
    val = int(input())
    
    if val==-1:
        return
    
    root = Node(val)

    print("Enter value in left part ")
    root.left = createTree()

    print("Enter value in right part ")
    root.right = createTree()

    return root

# def leftView(root, list1):
#     if root == None:
#         return 
    
#     list1.append(root.key)
#     leftView(root.left, list1)

#     if root.left is None:
#         if root.right is not None:
#             leftView(root.right, list1)

#     return list1

# list1 = []
# def leftView(root):
#     if root == None:
#         return 
    
#     list1.append(root.key)
#     leftView(root.left)

#     if root.left is None:
#         if root.right is not None:
#             leftView(root.right)

#     return list1

# list1 = []
# def leftView(root):
#     queue = [root]
#     list1 = []
#     while(len(queue)>0):
#         curr = queue.pop(0)
#         list1.append(curr.key)

#         if curr.left is not None:
#             queue.append(curr.left)

#     return list1

list1 = []

def leftView(root, level, list1):
    if root == None:
        return

    if level == len(list1):
        list1.append(root.key)

    leftView(root.left, level+1, list1)
    leftView(root.right, level+1, list1)



if __name__=='__main__':
    root = createTree()
    leftView(root,0,list1)
    print(list1)
