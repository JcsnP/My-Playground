def taxRate(salary):
    if salary >= 100000:
        return 0.15
    elif salary >= 30000 and salary < 100000:
        return 0.10
    elif salary >= 10000 and salary < 30000:
        return 0.05
    else:
        return 0

def taxCal(salary, taxRate):
    result = salary * taxRate
    return result

salary = float(input("Please input your salary: "))
rate = taxRate(salary)

print("TAX: %.2f" %(taxCal(salary, rate)))
