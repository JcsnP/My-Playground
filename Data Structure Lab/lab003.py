class Node:
    def __init__(self, data = None, next = None):
        self.data = data
        self.next = None

class LinkedList():
    def __init__(self):
        self.first = None
        
    def insert(self):
        N = int(input("How many node ?: "))
        while N >= 1:
            LL.insertAndSort(int(input("Enter number: ")))
            N = N - 1
    
    def insertAndSort(self, data):
        new_node = Node()
        new_node.data = data
        
        if self.first is None:
            self.first = new_node
            return 0
        
        temp = self.first
        
        while temp.next:
            if temp.data == data:
                print("Data is exits")
                return 0 # don't use 'break'
            elif data > temp.data:
                new_node.next = temp
                self.first = new_node
                break
            
            # Linked to other linked list
            temp = temp.next
            
        new_node.next = temp.next
        temp.next = new_node
        
    def delete(self, data):
        temp = self.first
        while temp.data is not data:
            temp = temp.next
        temp.data = temp.next.data
        temp.next = temp.next.next
        
    def find(self, data):
        temp = self.first
        i = 0
        while temp.next:
            i = i + 1
            if temp.data == data:
                print("found, compare = %d" %(i))
            temp = temp.next
    
    def display(self):
        current = self.first
        while(current):
            print(current.data, end = " -> ")
            current = current.next   
        print("None")

# main
# create Linked List

LL = LinkedList()
'''
while True:
    choice = int(input("[1] Insert\n[2] Traverse\n[3] Delete\n[4] Find\n[0] Exit\n"))
    # menu
    if choice == 0:
        break
    elif choice == 1:
        LL.insert()
    elif choice == 2:
        LL.display()
    elif choice == 3:
        N = int(input("Input data to delete: "))
        LL.delete(N)
    elif choice == 4:
        N = int(input("Input data to find: "))
        LL.find(N)
    else:
        print("Invalid Choice")
'''
LL.insertAndSort(9)
LL.insertAndSort(7)
LL.insertAndSort(5)
LL.insertAndSort(3)
LL.insertAndSort(1)
LL.display()
