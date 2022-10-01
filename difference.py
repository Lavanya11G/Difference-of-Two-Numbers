a = int(input("What is your first number?\n"))
b = int(input("What is your second number?\n"))
difference = a - b
if difference < 0:
    difference *= -1
print(f"The difference between {a} and {b} is {difference}")
