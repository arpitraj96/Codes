# num = int(input("Enter an integer value: "))
# copynum = num
# lst = []
# for i in range(1,num):
#     if num%i==0:
#         lst.append(i)
# print("The factors of {} are:".format(num),lst)
# length = len(lst)
# sum = 0
# for j in range(0,length):
#     sum = sum+lst[j]
# print("The sum of the factors is:",sum)
# if copynum==sum:
#     print("The given number {} is a perfect number".format(copynum))
# elif sum>copynum:
#     print("The given number {} is a abundant number".format(copynum))
# elif sum<copynum:
#     print("The given number {} is a deficient number".format(copynum))
##########################################################################
# num = int(input("Enter: "))
# a = str(num)
# b = len(a)
# s = 0
# for i in range(1,b+1):
#     if num%10!=0 or num%10==0:
#         c = num%10
#         s = s+c
#         num = num//10
# print(s)
###########################################################################
# num = int(input("Enter: "))
# a = str(num)
# l = len(a)
# lst = []
# for i in range(1,l+1):
#     b = num%10
#     lst.append(b)
#     num = num//10
# print(lst)
def fac(num):
    if num==0 or num==1:
        return 1
    else:
        return num*fac(num-1)
print(fac(n))
def getsumfac(n):
    sum = 0
    for digit in str(n):
        sum = sum+fac(int(digit))
    return sum
n = int(input("Enter: "))
getsumfac(n)

