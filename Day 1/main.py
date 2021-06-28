import re

print ("Calculator")
print ("Type quit to exit the calculator\n")

previous = 0
run = True

def performMath():
    global run
    global previous
    eq = input("Enter Equation: ")
    if eq == 'quit':
        run = False
    else:
        eq = re.sub('[a-zA-Z,.()"":]','',eq)
        previous = eval(eq)
        print ("Your equation is", previous)

while run:
    performMath()
