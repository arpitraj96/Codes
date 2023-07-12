#Floyd'triangle
# Enter the number of row: 5
# 1
# 2 3
# 4 5 6
# 7 8 9 10
# 11 12 13 14 15
# n = int(input("Enter the number of row: "))
# k = 1
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(k,end=" ")
#         k+=1
#     print()
########################################
# Enter number of row: 5
# A
# A B
# A B C
# A B C D
# A B C D E
# n = int(input("Enter number of row: "))
# for i in range(1,n+1):
#     for j in range(65,65+i):
#         print(chr(j),end=" ")
#     print()
##########################################
# n = int(input("Enter the number of row: "))
# for i in range(1,n+1):
#     for k in range(1,n):
#         print(" ",end = " ")
#         n-=1
#     for j in range(1,i+1):
#         print("*",end=" ")
#     print()
##############################################
# Fibonacci Sequence
# Entre the number: 5
# 0
# 1
# 1
# 2
# 3
# num = int(input("Entre the number: "))
# n1 = 0
# n2 = 1
# count = 0
# if num<=0:
#     print("The number must be greater than 0")
# else:
#     while(count<num):
#         print(n1)
#         nth = n1+n2
#         n1 = n2
#         n2 = nth
#         count = count+1
