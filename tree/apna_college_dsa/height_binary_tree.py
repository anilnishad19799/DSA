class createNode:
    def __init__(self, key=5) -> None:
        self.val = key
        self.left = None
        self.right = None

    def createTree(self):
        
        # root = None

        print("Enter data")
        n = int(input())

        if n == -1:
            return None
        
        root = createNode(n)  

        print("enter data to left Node ")
        root.left = self.createTree()
        print("enter data to right Node ")
        root.right = self.createTree()

        print("rrot->data", root.val)
        return root
    
    def height_of_tree(self, root):

        if root == None:
            return -1
    
        l_hei = self.height_of_tree(root.left)
        r_hei = self.height_of_tree(root.right)

        return max(l_hei, r_hei) + 1 

if __name__=='__main__':
    obj = createNode()
    root = obj.createTree()

    print("root", root.val)

    height_of_tree_val = obj.height_of_tree(root)
    print("height_of_tree_val", height_of_tree_val+1)


    # obj.preorder(root)




        