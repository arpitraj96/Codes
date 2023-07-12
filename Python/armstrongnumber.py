num = int(input("Enter the Number:"))
sum = 0
order = len(str(num))
copy_num = num
while num>0:
    digit = num%10
    sum = sum+digit**order
    num = num//10
if sum==copy_num:
    print(copy_num,"is an Armstrong Number.")
else:
    print(copy_num,"is not an Armstrong Number.")