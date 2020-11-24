studentScore = [] 
studentMAX, studentMIN = 0, 0
length = int(input("How many student in class: "))
MAX, MIN, SUM, average = 0, 999, 0, 0 

for i in range(length):
    name = str(input("Please enter student name: "))
    score = float(input("Please enter student score: "))
    studentScore.append(score)
    if studentScore[i] > MAX:
        MAX = studentScore[i]
        studentMAX = name
    if studentScore[i] < MIN:
        MIN = studentScore[i]
        studentMIN = name
    SUM = SUM + score

average = SUM / length

print("Highest score is %s have %d score" %(studentMAX, MAX))
print("Lowest score is %s have %d score" %(studentMIN, MIN))
print("Average score: %.2f" %(average))
