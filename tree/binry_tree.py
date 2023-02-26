class createNode:
    def Node(self, key):
        self.val = key
        self.left = None
        self.right = None
    
    def createNode(self, key):
        return self.Node(key)


    def createTree(self):

        root = None

        print("Enter data : ")
        n = int(input())

        if n==-1:
            return None
        
        root = self.createNode(n)

        print("Enter left node data : ")
        root.left = self.createTree()

        print("Enter Right node data : ")
        root.right = self.createTree()
        

if __name__=='__main__':
    create_tree_obj = createNode()
    print("1. Implement Binary tree")
    print("2. Exit")

    inp = int(input())
    if inp == 1:
        create_tree_obj.createTree()
    elif input==2:
        print("exit")
    else:
        pass