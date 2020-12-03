m1 = []
m2 = []

row = int(input("Please input row (m): "))
col = int(input("Please input column (n): "))

for i in range(row):
  arr = []
  for j in range(col):
    n = int(input("Matrix 1 [%d][%d]: " %(i+1, j+1)))
    arr.append(n)
  m1.append(arr)

for i in range(row):
  arr = []
  for j in range(col):
    n = int(input("Matrix 2 [%d][%d]: " %(i+1, j+1)))
    arr.append(n)
  m2.append(arr)

for i in range(len(m1)):
    for j in range(len(m1[0])):
        print(m1[i][j] + m2[i][j], end='\t')
    print("\n")
