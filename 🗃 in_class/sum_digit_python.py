def sumdigit(n):
    result = 0
    digit = 0
    while(n != 0):
        digit = int(n % 10)
        n = int(n / 10)
        result = result + digit
    return result

n = int(input())
print("%d" %(sumdigit(n)))
