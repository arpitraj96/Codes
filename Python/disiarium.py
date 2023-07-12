# def calculateLength(n):
#     length = 0
#     while(n != 0):
#         length = length + 1
#         n = n//10
#     return length
import time

num = int(input("Enter a number: "))
rem = sum = 0
l = len(str(num))
# len = calculateLength(num)
n = num
while(num > 0):
    rem = num%10
    sum = sum + (rem**l)
    num = num//10
    l = l - 1
if(sum == n):
    print(str(n) + " is a disarium number")
else:
    print(str(n) + " is not a disarium number")
time.sleep(5)