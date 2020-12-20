#dictionary
Person = {'personID': 0,
          'firstName': "",
          'lastName': "",
          'Account': {'accountNumber': 0,
                      'accountType': 0,
                      'money': 0,
                      'limit': 0}
          }

def inputPerson():
    Person['personID'] = int(input("Enter Customer ID: "))
    Person['firstName'] = str(input("Enter First Name: "))
    Person['lastName'] = str(input("Enter Last Name: "))
    
    #account detail
    Person['Account']['accountNumber'] = int(input("Enter Account number: "))
    Person['Account']['accountType'] = int(input("Enter Account type (1) or (2): "))
    accountType = Person['Account']['money'] = int(input("Enter initial money: "))
    #check account type 2
    if(Person['Account']['accountType'] == 2):
        Person['Account']['limit'] = int(input("Enter limit: "))
   
    
def showPerson():
    print("Customer id: %d" %(Person['personID']))
    print("Customer First Name: %s" %(Person['firstName']))
    print("Customer Last Name: %s" %(Person['lastName']))
    print("Account number: %d" %(Person['Account']['accountNumber']))
    if(Person['Account']['accountType'] == 1):
        print("Account type: (1) Saving account")
    else:
        print("Account type: (2) Current account")
    print("Balance: %d" %(Person['Account']['money']))
    if(Person['Account']['accountType'] == 2):
        print("Limit: %d" %(Person['Account']['limit']))

def deposite():
    money = int(input("Please enter the amount you want to deposit: "))
    Person['Account']['money'] = Person['Account']['money'] + money;

def withdraw():
    money = int(input("Please enter the amount you wish to withdraw: "))
    Person['Account']['money'] = Person['Account']['money'] - money;
    
def main():
    inputPerson()
    
    while(True):
        print("----------------------------------------------------")
        print("    (1) Deposite   (2) Withdraw   (3) Exit     ")
        print("----------------------------------------------------")
        
        choice = int(input())
        
        if(choice == 1):
            deposite()
        elif(choice == 2):
            withdraw()
        elif(choice == 3):
            showPerson()
            break
        else:
            break

main()

