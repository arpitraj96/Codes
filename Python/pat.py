# for i in range(1,6):
#     print("*"*5,end=" ")
#     print()

# for i in range(65,70):
#   for j in range(1,i-63):
#     print(chr(i),end=" ")
#   print()
# for i in range(1,6):
#     for j in range(5,i,-1):
#         print(" ",end=" ")
#     for k in range(0,i+1):
#         print(i,end=" ")
#     for h in range(i):
#         print(j,end=" ")
#     print()
# num = int(input("Enter the number: "))
# for i in range(1,num+1):
#   for j in range(1,i+1):
#     print(i,end=" ")
#     i+=i
#   print()
num = int(input("Enter: "))
for i in range(1,num):
    for j in range(1, i + 1):
        print(i, end=" ")
        i = i + 1
    print()