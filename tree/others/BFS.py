class Node:
    def __init__(self, val):
        self.left = None
        self.right = None
        self.key = val

def insert(root, val):
    if root==None:
        root = Node(val)
        return root

    if val < root.key:
        root.left = insert(root.left, val)
    else:
        root.right = insert(root.right, val)
    
    return root

def BFS(root):
    queue = [root]
    queue2 = [root.key]

    while len(queue)>0:
        cur_node = queue.pop(0)
        print("data",cur_node.key)
        # root = queue[0]
        if cur_node.left is not None:
            queue.append(cur_node.left)
            # queue2.append(cur_node.left.key)

        if cur_node.right is not None:
            queue.append(cur_node.right)
            # queue2.append(cur_node.right.key)
        
    # print("queue", queue2)


if __name__=='__main__':
    root = None
    print("Enter n value in BST")
    n = int(input())
    for i in range(n):
        val = int(input())
        root = insert(root, val)
    
    BFS(root)