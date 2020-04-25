n = int(input())
dictionary = {}

for i in range (0, n):
    student_info = input().split()
    marks = list(map(float, student_info[1:])) # converts indices 1 to END of student_info to floats and puts them in a list
    summ = sum(marks)
    avg = summ/3.0
    dictionary[student_info[0]] = avg
    
query = input()
print("%.2f" % dictionary[query])
