# implement in binary tree

subtreelist = []
tree_list = []

class Node:
    def __init__(self, val):
        self.key = val
        self.left = None
        self.right = None


def createTree():
    
    print("Enter value : ")
    val = int(input())
    
    if val == -1:
        return

    root = Node(val)

    print("Enter value in left tree")
    root.left = createTree()
    print("Enter value in right tree")
    root.right = createTree()

    return root
    

def createSubTree():
    print("Enter value : ")
    val = int(input())
    
    if val == -1:
        return

    root = Node(val)

    print("Enter value in left subtree")
    root.left = createTree()
    print("Enter value in right subtree")
    root.right = createTree()

    return root


def mainTreePreorder(root, main_tree_list):
    if root == None:
        return
    
    main_tree_list.append(root.key)
    mainTreePreorder(root.left, main_tree_list)
    mainTreePreorder(root.right, main_tree_list)

    return main_tree_list

def treePreorder(root, tree_list):
    if root == None:
        return
    
    val = mainTreePreorder(root, [])
    tree_list.append(val)
    treePreorder(root.left, tree_list)
    treePreorder(root.right, tree_list)

    return tree_list


def subTreePreorder(root):
    if root == None:
        return
    
    # print("value : ",root.key)
    subtreelist.append(root.key)
    subTreePreorder(root.left)
    subTreePreorder(root.right)

    return subtreelist



if __name__=='__main__':

    print("Original Tree")
    root = createTree()
    tree_val = treePreorder(root, [])
    print("tree value : ", tree_val)

    print("Sub Tree")
    sub_root = createSubTree()
    subtree_val = subTreePreorder(sub_root)
    print("subtree value : ", subtree_val)

    tree_match = False
    for i in tree_val:
        if subtree_val == i:
            tree_match = True
            break
    if tree_match:
        print("SubTree present in main Tree")
    else:
        print("SubTree not present in main Tree")




    

