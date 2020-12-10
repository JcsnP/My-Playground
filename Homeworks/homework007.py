#declare varible
number = []
even = []
odd = []
evenPosition, oddPosition = [], []

def findEven():
    for i in range(len(number)):
        if(int(number[i]) % 2 == 0):
            even.append(number[i])
            evenPosition.append(i)

def findOdd():
    for i in range(len(number)):
        if(int(number[i]) % 2 != 0):
            odd.append(number[i])
            oddPosition.append(i)

def showEven():
    print("\n-------------------------------------------------")
    print("Even number:\t", end = ' ')
    for i in even:
        print("%d\t" %(int(i)) , end = ' ')
    print()
    print("At position:\t", end=' ')
    for i in evenPosition:
        print("%d\t" %(int(i + 1)), end = ' ' )
    print("\n-------------------------------------------------")

def showOdd():
    print("\n-------------------------------------------------")
    print("Odd number:\t", end=' ')
    for i in odd:
        print("%d\t" %(int(i)) , end = ' ')
    print()
    print("At position:\t", end=" ")
    for i in oddPosition:
        print("%d\t" %(int(i + 1)) , end = ' ')
    print("\n-------------------------------------------------")

def inputNumber():
    Length = int(input("How many number you want to find: "))
    for i in range(Length):
        number.append(input("Please input number %d: " %(i+1)))
    #call function

#call function
inputNumber()
findEven()
findOdd();
showEven()
showOdd()
