def writeFile():
    file = open("personal.dat", "w")
    
    while(True):
        emid = str(input("Employee Id: "))
        if(emid == "0"):
            break
        name = str(input("Employee First name and Last name: "))        
        age = str(input("Employee Age: "))
        salary = str(input("Employee Salary: "))
        department = str(input("Employee Department: "))

        file.write("%s %s %s %s %s\n" %(emid, name, age, salary, department))
        
        print("-----------------------------------------------------------")
    
    file.close()
    
    
    file = open("personal.dat", "r")
    print("-----------------------------------------------------------")
    for i in file:
        print("%s" %(i))

writeFile()
