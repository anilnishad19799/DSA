class Node:
    def __init__(self, val=3):
        self.key = val
        self.left = None
        self.right = None

    def createTree(self):

        print("Enter data :- ")
        val = int(input())

        # root = None
        
        if val == -1:
            return

        root = Node(val)

        print("Enter left data :-")
        root.left = self.createTree()
    
        print("Enter right data :- ")
        root.right = self.createTree()

        print("rrot->data", root.key)
        return root
    
    def reverse_level_order(self, root):

        if root == None:
            return

        self.reverse_level_order(root.left)
        self.reverse_level_order(root.right)

        print("val",root.key)

if __name__=='__main__':
    obj = Node()
    root = obj.createTree()

    obj.reverse_level_order(root)        
        

