studentScore = []
studentName = []
studentMAX, studentMIN = 0, 0
MAX, MIN, SUM, average = 0, 999, 0, 0
length = int(input("How many student in class: "))

while(length < 1):
    #check length if less than 1
    length = int(input("Invalid number. Please input more than 1: "))

for i in range(length):
    #input name and score
    name = str(input("Please enter student name: "))
    studentName.append(name)
    score = float(input("Please enter %s score: " %name))
    studentScore.append(score)
    
    #check score
    if studentScore[i] > MAX:
        MAX = studentScore[i]
        studentMAX = studentName[i]
    if studentScore[i] < MIN:
        MIN = studentScore[i]
        studentMIN = studentName[i]
    SUM = SUM + score
    
#find average
average = SUM / length

print("Highest score is %s have %.2f score" %(studentMAX, MAX))
print("Lowest score is %s have %.2f score" %(studentMIN, MIN))
print("Average score: %.2f" %(average))
