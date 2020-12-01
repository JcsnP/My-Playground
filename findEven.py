arr = []
even = []

while True:
    num = int(input("Please input number. If you want to stop enter -1: "))
    if num >= 0:
        arr.append(num)
    else:
        break

for e in arr:
    if e % 2 == 0:
        even.append(e)

print("Number of even numbers: ", len(even))

for e in even:
    print("Even number: %d" %e)
