people = 0

employee = {
    'id': '',
    'name': '',
    'age': '',
    'salary': '',
    'department': ''
}

def createEmployee():
    i = 0
    FileCreate = open("employee.dat", "w")
    
    people = int(input("How many employee: "))

    while(i < people):
        employee['id'] = str(input("Employee ID: "))
        employee['name'] = str(input("Employee Name: "))
        employee['age'] = str(input("Employee Age: "))
        employee['salary'] = str(input("Employee salary: "))
        employee['department'] = str(input("Employee deartment: "))
        
        FileCreate.write("%s,%s,%s,%s,%s\n" %(employee['id'], employee['name'], employee['age'], employee['salary'],employee['department']))
        
        i = i + 1
    
    print("Create FileCreate Successful") 
    FileCreate.close();

def displayEmployee():
    FileDisplay = open("employee.dat", "r")
    
    while(True):
        string = FileDisplay.readline()
        if string == '':
            break
        print("%s" %(string))
    
    FileDisplay.close()
    
def updateEmployee():
    FileUpdate = open("employee.dat", "a")
    
    employee['id'] = str(input("Employee ID: "))
    employee['name'] = str(input("Employee Name: "))
    employee['age'] = str(input("Employee Age: "))
    employee['salary'] = str(input("Employee salary: "))
    employee['department'] = str(input("Employee deartment: "))
        
    FileUpdate.write("%s,%s,%s,%s,%s\n" %(employee['id'], employee['name'], employee['age'], employee['salary'],employee['department']))
    
    FileUpdate.close()

def deleteEmployee():
    employee_id = str(input("Input employee id to delete: "))
    
    # open file, and get lines
    getLines = open("employee.dat", "r")
    Lines = getLines.readlines()
    getLines.close()
    
    # write file
    DeleteFile = open("employee.dat", "w")
    
    for line in Lines:
        p = line.rstrip().split(',')
        
        employee['id'] = p[0]
        
        if employee['id'] != employee_id:
            DeleteFile.write(line)
        
    DeleteFile.close()
    
def searchEmployee():
    EXITS = True
    
    employee_id = str(input("Input employee id to find: "))
    
    # open file, and get lines
    getLines = open("employee.dat", "r")
    Lines = getLines.readlines()
    getLines.close()
    
    SearchFile = open("employee.dat", "r")
    
    for line in Lines:
        p = line.rstrip().split(',')
        employee['id'] = p[0]
        
        if(employee['id'] == employee_id):
            print(line)
            EXITS = False
            break
        
    if(EXITS == True):
        print("Not Found")
    
    SearchFile.close()
    
# Main function
while(True):
    choice = 0
    print("-----------------------------------------------")
    print("MENU")
    print("[ 1 ]  create employee file")
    print("[ 2 ]  display employee file")
    print("[ 3 ]  update employee file")
    print("[ 4 ]  delete employee")
    print("[ 5 ]  search employee")
    print("[ 6 ]  stop program")
    choice = int(input("Please select menu: "))
    print("-----------------------------------------------")
    if(choice == 1):
        createEmployee()
    elif(choice == 2):
        displayEmployee()
    elif(choice == 3):
        updateEmployee()
    elif(choice == 4):
        deleteEmployee()
    elif(choice == 5):
        searchEmployee()
    elif(choice == 6):
        print("Stop Program")
        break;

