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

def findPreSuc(root, list1):
    if root == None:
        return
    findPreSuc(root.left, list1)
    list1.append(root.data)
    findPreSuc(root.right, list1)

    return list1

if __name__=='__main__':
    root = None
    print("Enter N value to be enter in BST :- ",end='')
    N = int(input())

    for _ in  range(N):
        val = int(input())
        root = createBSTTree(root, val)

    value = findPreSuc(root, [])
    print("value", value)
    print("Enter value to find for predecessor and succesor :- ", end='')
    presuc_value = int(input())

    if presuc_value in value:
        index = value.index(presuc_value)
        if index == 0:
            pre, suc = -1, value[index+1]
        elif index <= len(value) - 2:
            pre, suc = value[index-1], value[index+1]
        elif index == len(value)-1:
            pre, suc = value[index-1], -1
        else:
            print("index", index, "len(value)", len(value))
    else:
        print("value is not present in Tree")
        pre, suc = -1, -1
    print(pre,suc)


