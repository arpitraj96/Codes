# tuple = ('abcd',786,2.23,'john',70.2)
# tinytuple = (123,'john')
# print(tuple)
# print(tuple[0])
# print(tuple[1:3])
# print(tuple[2:])
# print(tuple*2)
# print(tuple+tinytuple)
# a = {1,2,2,3,3,3}
# print(type(a))
# print(a)
# n1 = int(input("Enter: "))
# n2 = int(input("Enter: "))
# a = divmod(n1,n2)
# print(a[0])
# a = 2.3
# c = int(a)
# print(c)
# print(type(a))
# print(type(c))
# m = input("Enter ")
# f = input("Enter ")
# a = int(input("Enter "))
# if m=="M" and a>=70:
#     print("Eligible")
####################################
# year = int(input("Enter: "))
# if year>0:
#     if (year % 4==0) or (year%100!= 0) and (year%400==0):
#         print("Leap")
#     else:
#         print("Not leap")
# else:
#     print("Not leap")
################################################
# num = int(input("Enter: "))
# sum = 0
# if num>0:
#     while num>0:
#         sum = sum+num
#         num-=1
#     print(sum)
# else:
#     while num<0:
#         sum = sum+num
#         num+=1
#     print(sum)
####################################################
# def fib(n):
#     if n==1:
#         return 0
#     elif n==2:
#         return 1
#     else:
#         return fib(n-1)+fib(n-2)
# def fib_series(n):
#     for i in range(1,n+1):
#         print(fib(i))
# fib_series(5)
###############################################
# Matrixbeforetransposition=[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]
# l = (len(Matrixbeforetransposition))
# k = []
# for i in range(0,l):
#     k = Matrixbeforetransposition[i]
#     print(k)
###################################################
# n = int(input("Enter: "))
# fib = 0#1,1,
# sum = 1#1,2
#
# for i in range(0,n):
#     print(fib)
#     c = fib+sum
#     fib = sum
#     sum = c
############################################
s = "How are you?"
# n = int(18)
l=len(s)
# # print(s[(l-2):])
# # print(s[-10:-7])
# # print(s[1:l-1])
# # f =s[o]
# # print(s[l::-1])
# if n>=0 and n<=l:
#     print(s[0:n]*n)
# else:
#     print("Error")
# import string
# a = (s.find("are"))
# print(a)
# if a!=-1:
#     print("Number")
# myfun=lambda a:bool(a%2)
# print(myfun(81), myfun(92))
# i=17
# while True:
#     if i%5:
#         break
#     print(i,end=' ')
#     i+=1
# def myfoo():
#     total += 1
#     return total
# total = 200
# print(myfoo())

# n = 2
# m = 3
# n,m = m,n
# print("After Swapping")
# print("First number is",n)
# print("Second number is",m)
# import cmath
# a = 2
# b = 3
# c = 1
#
# # calculate the discriminant
# d = (b**2) - (4*a*c)
#
# # find two solutions
# sol1 = (-b-cmath.sqrt(d))/(2*a)
# sol2 = (-b+cmath.sqrt(d))/(2*a)
#
# print('The solution are {0} and {1}'.format(sol1,sol2))
##############################################################
# n = int(input("Enter the number: "))
# for i in range(1,n+1):
#     if i%2!=0:
#         print("{}^3,".format(i),end = " ")
#     else:
#         print("-{}^3,".format(i), end = " ")
########################################################
# n = int(input("Enter the value of n: "))
# sum = 0
# for i in range(1,n+1):
#     fact = 1
#     for j in range(1,i+1):
#         fact = fact*j
#     sum = sum+(n**i/fact)
# print("The sum of the series: ",sum)
##############################
# n = int(input("Enter: "))
# for i in range(2,n):
#     if n%i==0:
#         print("Not Prime")
#         break
# else:
#     print("Prime")
###########################################
# str = input("Enter name: ")
# lst = str.split(" ")
# # print(lst)
# s = len(lst)
# for i in range(0,s):
#     s1 = lst[i]
#     s11 = s1.capitalize()
#     print(s11,end=" ")
#############################################
l = []
for i in range(0,4):
    a = int(input("enter the number"))
    l.append(a)
print(l)