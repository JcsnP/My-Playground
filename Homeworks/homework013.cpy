class polynomialnode:
    def __init__(s, coef, expo):
        s.coefficient = coefficient
        s.exponent = exponent
        s.next = None

class LinkedList:
    def __init__(s):
        s.linklist = None
        
    def listInsert(s, coef, expo):
        newnode = polynomialnode(coef, expo)
        newnode.next = FirstLinked.linklist
        FirstLinked.linklist = newnode
        
    def listPrint(s):
        std = s.linklist
        while std is not None:
            print("|%d|%d|" %(std.coefficient, std.exponent), end = ' ')
            if(std.next != None):
                print("<--", end = ' ')
            std = std.next

FirstLinked = LinkedList()

# insert into link list
while True:
    coefficient = float(input("Please Enter Coefficient: "))
    exponent = float(input("Please Enter Exponent: "))
    FirstLinked.listInsert(coefficient, exponent)
    if exponent == 0:
        break

# Call function to print data in linked list
FirstLinked.listPrint()
