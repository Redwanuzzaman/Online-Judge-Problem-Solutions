student = []
marks = []
n = int(input())

for i in range(0, n):
    name = input()
    mark = float(input())
    student.append([name, mark])
    marks.append(mark)

mn = min(marks)

for i in range(0, n):
    if marks[i] == mn:
        marks[i] = 5000.0

student.sort()
mn = min(marks)

for name, mark in student:
    if mark == mn:
        print(name)
