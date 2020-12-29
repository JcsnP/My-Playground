employee = {
    'id': '',
    'name': '',
    'age': '',
    'salary': '',
    'department': ''
    }

def ReadAndWriteFile():
    readFile = open("personal.dat", "r")
    writeFile = open("personal2.dat", "w")
    while True:
        string = readFile.readline()
        if string == '':
            break
        p = string.rstrip().split(',')
        employee['id'] = p[0]
        employee['name'] = p[1]
        employee['age'] = p[2]
        employee['salary'] = p[3]
        employee['department'] = p[4]
        
        more = (int(p[3]) * 0.05) + int(p[3])
        writeFile.write("%s,%s,%s,%s,%s\n" %(employee['id'], employee['name'], employee['age'], more, employee['department']))
        
        
    readFile.close()
    writeFile.close()

def ShowBothFile():
    # personal.dat
    readPersonal = open("personal.dat", "r")
    readPersonal2 = open("personal2.dat", "r")
    
    print("Personal : ------------------------------------------\n")
    while True:
        stringPersonal = readPersonal.readline()
        if stringPersonal == '':
            break
        print(stringPersonal)
    
    print("\nPersonal 2 : ------------------------------------------\n")
    while True:
        stringPersonal2 = readPersonal2.readline()
        if stringPersonal2 == '':
            break
        print(stringPersonal2)

ReadAndWriteFile()
ShowBothFile()
