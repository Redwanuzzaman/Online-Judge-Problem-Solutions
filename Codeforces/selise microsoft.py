user_name = input()
req = "microsft"
status = True
for i in req:
    if i not in user_name:
        status = False
        break
if status:
    print("We both love Microsoft!")
else:
    print("Only I love Microsoft!")