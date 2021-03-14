class Node:
    def __init__(self, data = None, next = None):
        self.data = data
        self.next = None

class LinkedList():
    def __init__(self):
        self.first = None
    
    def insert(self, data):
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
            elif temp.data > data:
                new_node.next = temp
                self.first = new_node
                break
            elif temp.next.data > data:
                break
            
            # พอสลับ บรรทัดแล้วได้เฉย [elif อันที่ 2 กับ 3]
            # Linked to other linked list
            temp = temp.next
            
        new_node.next = temp.next
        temp.next = new_node
        
        '''
        while found == False:
            if(self.first is None):
                self.first = new_node
                found = True
            elif(temp.data == data):
                print("Data is exits!")
                break
            elif(temp.data < data):
                new_node.next = temp
                self.next = new_node
                found = True
            while(temp.next):
                if temp.next.data > data:
                    break
                temp = temp.next
            '''
    def detete(self, data):
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
        
LL = LinkedList()
LL.insert(20)
LL.insert(15)
LL.insert(30)
LL.insert(5)
LL.insert(25)
LL.insert(20)
LL.insert(36)
LL.insert(10)
LL.insert(15)

LL.find(20)

# delete
# LL.detete(30)

# show all node
LL.display()
