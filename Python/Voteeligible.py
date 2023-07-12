# def eligible(a):
#     if a>=18:
#         print("You are eligible to Vote")
#     else:
#         print("You are not eligible to Vote")
#     return
# a = int(input("Enter your Age: "))
# eligible(a)
#############
# def max(a,b,c):
#     if a>b and a>c:
#         print("{} is greatest".format(a))
#     elif b>c and b>a:
#         print("{} is greatest".format(b))
#     else:
#         print("{} is greatest".format(c))
#     return
#
# a = int(input("Enter first number: "))
# b = int(input("Enter second number: "))
# c = int(input("Enter third number: "))
# max(a,b,c)
###################
# def sum(l):
#     a = 0
#     s = 0
#     for x in range(l):
#         a+=x
#     return a
# print(sum([10,20,30,40,50]))
#####################
# def sum(list):
#     l2 = map(int, list)
#     len1 = len(l2)
#     s = 0
#     for i in range(1,len1+1):
#         s=s+l2[i]
#     return s
# sum([10,20,30,40])
######################
# def sum(numbers):
#     total = 0
#     for x in numbers:
#         total+=x
#     return total
# print(sum([10,20,30,40,50]))
# print(type(sum))
# sum1=({10,20,30,40,50})
# print(type(sum1))
########################
# def cube(a):
#     return a**3
# print(cube(4))
#
#
# def sum(numbers):
#      total = 1
#      for x in numbers:
#          total= total*x
#      return total
# print(sum([5,6]))
########
# def string(s1):
#     print(s1[::-1])
#     return
# s2 = input("Enter the strings: ")
# string(s2)
#########
# l1 = [1,2,3,4,5]
# print(l1)
# print((l1[0:4]))
# print(l1[::-1])
#####################
# import math
# print(math.factorial(2))
# print(math.pow(2,3))

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
a,b = b,a
print(a,b)

