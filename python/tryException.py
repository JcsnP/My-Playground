def aboutExcetption():
    try:
        print("Hello")
    except NameError:
        print("Varible x is not defined")
    except:
        print("Something else went wrong")
    finally:
        print("The 'try except' is finished")

def raiseException():
    x = -1

    if(x < 0):
        raise Exception("Sorry, no numbers below zero")

def raiseException_2():
    x = "hello"

    if not type(x) is int:
        raise TypeError("Only integers are allowed")

# call function here --
