#infinite while loop
#A while loop becomes infinite loop if a condition never becomes FALSE. The condition should be made FALSE somewhere in the body of the loop so that the loop terminates at some point.
x=int(input("Enter a number:"))
while x<=5:
    print(x)
    x+=1