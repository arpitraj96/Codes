num = int(input("Enter a number: "))
for i in range(0,num+1):
    for j in range(num,i,-1):
        print(" ",end=" ")
    for k in range(0,i+1):
        print("*",end=" ")
    for h in range(i):
        print("*",end=" ")
    print()
"""
num = int(input("Enter"))
for i in range(1,num+1):
    for j in range(0,(i+i)-1,1):
        print("*",end=" ")
    print()
"""