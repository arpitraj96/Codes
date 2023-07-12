# num = int(input("Enter a Number: "))
# for i in range(1,num+1):
#     for j in range(i,i+i):
#         print(j,end=" ")
#     print()
# num = int(input("Enter a Number: "))
# for i in range("A","F"):
#     for j in range(0,"G"):
#         print(i,end=" ")
#     print()
num = int(input("Enter the number: "))
r = 1
for i in range(1,num+1):
  for j in range(1,i+1):
    print(r,end=" ")
    r+=1
  print()