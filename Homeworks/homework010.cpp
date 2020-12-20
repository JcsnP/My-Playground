def writeFile():
    file = open("personal.dat", "w")
    
    while(True):
        emid = str(input("Employee Id: "))
        if(emid == "0"):
            break
        name = str(input("Employee First name and Last name: "))        
        age = str(input("Employee Age: ")) 
        department = str(input("Employee Department: "))
        
        file.write(emid)
        file.write(name)
        file.write(age)
        file.write(department + "\n")
    
    file.close()
    
    
    file = open("personal.dat", "r")
    print("-----------------------------------------------------------")
    for i in file:
        print("%s" %(i))

writeFile()
