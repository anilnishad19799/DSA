class Node:
    def __init__(self,val):
        self.key = val
        self.left = None
        self.roght = None



def createTree():
    
    print("Enter the value :- ")
    val = int(input())

    if val == -1:
        return
    
    root = Node(val)

    print("Enter left side value :- ")
    root.left = createTree()
    print("Enter right side value :- ")
    root.right = createTree()

    return root

def createSubTree():
    
    print("Enter the value :- ")
    val = int(input())

    if val == -1:
        return
    
    root = Node(val)

    print("Enter left side value :- ")
    root.left = createSubTree()
    print("Enter right side value :- ")
    root.right = createSubTree()

    return root

def inOrder(def_root, list1):
    if def_root == None:
        return 
    
    inOrder(def_root.left, list1)
    list1.append(def_root.key)
    inOrder(def_root.right, list1)

    return list1

def preOrder(def_root, list1):
    if def_root == None:
        return 
    
    list1.append(def_root.key)
    preOrder(def_root.left,list1)
    preOrder(def_root.right, list1)

    return list1

def removeElements(A, B):
    for i in range(len(B)-len(A)+1):
        for j in range(len(A)):
            if B[i + j] != A[j]:
                break
        else:
            return True
    return False


def isSubTree(root, subroot):
    if subroot == None:
        return True
    if root == None:
        return True

    mt = inOrder(root, [])
    st = inOrder(subroot, [])

    print("Inorder")
    print("main tree list", mt)
    print("sub tree list", st)


    res = False
    if removeElements(st, mt):
        res = True
    
    if not res:
        return False
    
    mt = preOrder(root, [])
    st = preOrder(subroot, [])
    print("Preorder")
    print("main tree list", mt)
    print("sub tree list", st)

    res = False
    if removeElements(st, mt):
        res = True
    
    if not res:
        return False
    else:
        return True


if __name__=='__main__':

    print("Implement Original Tree")
    root = createTree()

    print("Implement subTree Tree")
    subroot = createSubTree()

    flag = isSubTree(root, subroot)

    if flag:
        print("subTree is present in Tree")
    else:
        print("subTree is not present in Tree")
