### interpolation

print("| x1 | y1 |")
print("| x2 | y2 |")
print("| x3 | y3 |")
print("")
print("solve for y2")

x1 = float(input("x1 value: ")); y1 = float(input("y1 value: "))
x2 = float(input("x2 value: "))
x3 = float(input("x3 value: ")); y3 = float(input("y3 value: "))

y2 = ((x2-x1)*(y3-y1))/(x3-x1) + y1

print("y1 value is: " + str(y2))
