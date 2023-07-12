# print("Hello Python")


# # This is a singal line comment.
# """
# This is
# a multi
# line comment"""


# print("Hello", end=",")  #end="" means it ends with blank, and next line is print in same line.
# print(" Apu")
# print("Hello", "Apu")
# print("c:\noman")
# print("c:\\noman")
# print(r"c:\noman")
# print("c:\"noman")
# print("Apu is a \t good boy")
# # \n(new line character) is syntax for new line.
# # The output of this line is c: "newline" oman.
# # Here \ is a escape sequence character.
# # \t(tab) is syntax for tab.
# # If you want to print as same as you written then give two backslash sign "\\".
# # Or you have to write "r"(meaning raw) as first letter.


#var1 = "Hey "
#var2 = 4
#var3 = 4.243
# print(type(var1))
# print(type(var2))
# print(type(var3))
# # print(var1 + var2)  #This gives error bcz var1 is string and var2 is a integer value.
# print(var2 + var3)
# var4 = var2 + var3
# print(type(var4))
# var5 = "Apu"
#var6 = "4"
# print(var1 + var5 + var6)  #Concatenate

#Typecasting
# var7 = "4"
# print(int(var6) + int(var7))  #Here string value is typecasted in integer value.
# print(10*str(int(var6)+int(var7)))

# print(10*"Hey there\n")


# print("Enter a number")
# inpnum1 = input() #input value is always taken as string.
# print("You entered:",inpnum1)
# print("You entered:",int(inpnum1)+10)


#Quiz1 A basic calculator.
# print("Enter your first number:")
# num1 = int(input())
# print("Enter your second number:")
# num2 = int(input())
# print("Sum of these two numbers is:",num1+num2)


# mystr = "Apu is a good boy."
# print(mystr)
#In python index starts from zero(0).
#The last item in the string has an index of -1, the second last has an index of -2 and so forth.
# print(mystr[0:3])  #Here 0 is included but 3 is excluded, instead of taking 3 it takes 3-1.
# print(mystr[-18:-15])
# print(len(mystr))
# print(mystr[0:10:2])  #Here it skip 2-1 character(Extend slicing). This is called stepper.
#.isalpha it checks that line consists only alphabet or not.
#.isalnum it checks that line consists only alphabet and number or not.
#.endswith("-------") it checks whether line is ends with -----.
#.count("----") it counts the letter.
#.capitalize() it capitalize the first letter.
#.upper() converts line in upper case.
#.lower() converts line in lower case.
#.find("----") finds specific words or letter(entered between double quotes).
#.replace("--","--") replaces the desired words.
#.isupper() checks whether the line is in upper case or not.
#.islower() checks whether the line is in lower case or not.
# print(mystr.isalpha())
# print(mystr.isalnum())
# print(mystr.endswith("boy"))
# print(mystr.count("g"))
# print(mystr.capitalize())
# print(mystr.upper())
# print(mystr.lower())
# print(mystr.find("is"))
# print(mystr.replace("Apu","Papu"))
# print(mystr.isupper())
# print(mystr.islower())


#List  List refers to a collection of data which are normally related.
# user_age = [21,22,17,18,20]
# print(type(user_age))
# print(user_age[2])  #Whenever you want to access the particular things from a list, call it by its index value.
# print(user_age[-2])  #The last item in the list has an index of -1, the second last has an index of -2 and so forth.
# user_age2 = user_age
# print(user_age2)
# user_age3 = user_age[2:4]
# print(user_age3)
# user_age4 = user_age[0:5:2]
# print(user_age4)
# user_age[2] = 19  #It modified the list.
# print(user_age)
# user_age.append(25)  #To add items, you use the append() function.
# print(user_age)
# del user_age4[1]  #To remove items, you use the del function.
# print(user_age4)


#Task1
# myList = [1,2,3,4,5,'Hey']
# print(myList)
# print(myList[2])
# print(myList[-1])
# myList2 = myList[1:5]
# print(myList2)
# myList[1] = 20
# print(myList)
# myList.append("How are you?")
# print(myList)
# del myList[5]
# print(myList)


#Tuples  Tuples are just like lists, but you cannot modify their values.
# months_of_year = ("Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec")
# print(type(months_of_year))
# print(months_of_year)
# print(months_of_year[2],months_of_year[-1])


#Dictionary Dictionary is a collection of related data PAIRS.
# mydict = {"Apu":22,"Papu":20,"Tapu":18,"Kapu":17}
# mydict1 = dict(Apu=22,Papu=20,Tapu=18,Kapu=17)
# print(type(mydict))
# print(type(mydict1))
# print(mydict)
# print(mydict1)
# print(mydict["Apu"])
# print(mydict1["Apu"])
# mydict1["Papu"] = 19  #To modify items in a dictionary, we write dictionaryName[dictionary key of item to be modified] = new data.
# print(mydict1)
# mydict1["Hapu"] = 20  #To add items to a dictionary, we write dictionaryName[dictionarykey] = data.
# print(mydict1)
# del mydict1["Hapu"]  #To remove items from a dictionary, we write del dictionaryName[dictionary key].
# print(mydict1)


#Task2
# myDict = {"one":1.35,"two":2.25,3:"+",2:7.9}
# print(myDict)
# print(myDict["one"])
# print(myDict[2])
# myDict["two"] = 2.5
# print(myDict)
# myDict["new item"] = "I'm new"
# print(myDict)
# del myDict["one"]
# print(myDict)


#Input
# myName = input("Please enter your name: ")
# myAge = input("What about your age: ")
# print ("Hello World, My name is", myName,"and I am",myAge,"years old.")


#Print The print() function is used to display information to users.
# print ("Hello World, my name is %s and I am %s yearsold." %(myName, myAge))
# print ("""Hello World, I am Apu and my age is 17 yrs.""")  #Triple quote, helps to increase the readability of your message.


#if statement
# userinput = input("Are you above 18yr?\n")
# if userinput=="Yes":
#     print("You are eligible to vote.")
# else:
#     print("You are not eligible to vote.")


# userInput = input('Enter 1 or 2: ')
# if userInput == "1":
#     print ("Hello World")
#     print ("How are you?")
# elif userInput == "2":
#     print ("Python Rocks!")
#     print ("I love Python")
# else:
#     print ("You did not enter a valid number")


#for loop
# pets = ['cats','dogs','rabbits','mouse']
# for mypets in pets:
#     print(mypets)
# for index, mypets in enumerate(pets):
#     print(index, mypets)
# message = "Hello"
# for i in message:
#     print(i)


#Looping through a sequence of numbers   Syntax: range(start, end, step).
# for l in range(0,10,2):
#     print(l)

# for i in range(5):
#     print(i)


#while loop
# num = 10
# while num>0:
#     print("Num=",num)
#     num-=1

#Break
# j = 0
# for i in range(5):
#     j+=2
#     print("i= ",i,", j= ",j)
#     if j==6:
#         break


#Continue
# j = 0
# for i in range(5):
#     j+=2
#     print("\ni= ",i,", j= ",j)
#     if j==6:
#         continue
#     print("I will be skipped over if j==6")


#Try and except statements
# try:
#     answer = 12/0
#     print(answer)
# except:
#     print("An error occurred")

# try:
#     userinpnut = int(input("Please enter the first number: "))
#     userinpnut2 = int(input("Please enter the second number: "))
#     answer = userinpnut/userinpnut2
#     print("The answer is: ",answer)
#     myfile = open("missing.txt",'r')
# except ValueError:
#     print("Error: You did not enter a number")
# except ZeroDivisionError:
#     print("Error: Cannot divide by 0")
# except Exception as e:
#     print("Unknown error: ",e)


#What are Functions?
#Functions are simply pre-written codes that perform a certain task.

#Defining our own functions   The syntax for defining a function is as follows: def functionName(parameters): code detailing what the function should do return [expression]
# def check_if_prime(numberTocheck):
#     for x in range(2, numberTocheck):
#         if (numberTocheck%x==0):
#             return False
#         return True
#
# answer = check_if_prime(5)
# print(answer)

# def average(a, b):
#     mean = (a+b)/2
#     return mean
# v = average(5,4)
# print(v)

# import math
# def pythagoras(perpendicular,base):
#     """This function is for finding Hypotenuse of a triangle."""   #This line is called Docstring.
#     hypotenuse = math.sqrt(perpendicular**2+base**2)
#     return hypotenuse
#
# Hypotenuse = pythagoras(3,4)
# print(Hypotenuse)
# print(pythagoras.__doc__)   #For execute Docstring.  Docstring is use for knowing about the function.


#Importing Module
# import random as r
# h = r.randrange(1,10,2)
# print(h)


#HackerRank
#1
# n = int(input())
# if n%2==0 and n>20:
#     print("Not Wired")
# elif n%2==0 and n>=2 and n<=5:
#     print("Not Wired")
# else:
#     print("Wired")


#2
# n = int(input())
# i = 0
# while(i<=n):
#     print(i**2)
#     i+=1


#3
# def is_leap(year):
#     y = year//4
#     if y%2==0:
#         leap = True
#     else:
#         leap = False
#     return leap
#
# year = int(input())
# print(is_leap(year))


#4
# if __name__ == '__main__':
#     n = int(input())
#     i = 1
#     while(i<=n):
#         print(i,end="")
#         i+=1


#5
# def print_full_name(first, last):
#       last+="!"
#       print("Hello",first,last,"You just delved into python.")
#
# if __name__ == '__main__':
#     first_name = input()
#     last_name = input()
#     print_full_name(first_name, last_name)

#Practice
#Calculator
# print("Welcome😊")
# num1 = int(input("Enter the first digit: "))
# num2 = int(input("Enter the second digit: "))
# c = (input("Enter the Operator: "))
# if c=="+":
#     print("Your answer is: ", num1+num2,"🙂")
# elif c=="-":
#     print("Your answer is: ", num1-num2,"🙂")
# elif c=="*":
#     print("Your answer is: ", num1*num2,"🙂")
# elif c=="/":
#     print("Your answer is: ", num1/num2,"🙂")
# elif c=="//":
#     print("Your answer is: ", num1//num2,"🙂")
# elif c=="%":
#     print("Your answer is: ", num1%num2,"🙂")
# else:
#     print("I'm still learning🙂")


#Filters
# print("Welcome to our SHOP")
# print("We have:\n"
#       "01.Shirts\n"
#       "02.Jeans\n"
#       "03.T-Shirts\n"
#       "04.Shoes\n"
#       "05.Socks\n"
#       "06.Belts\n"
#       "07.Caps\n"
#       "08.Eye wears\n"
#       "09.Bags\n"
#       "10.Wrist Watch\n")
# particulars = input("What do you want to buy today?\nEnter the number of particular.\n")

def sumd(n):
  s = str(n)
  l = len(s)
  # print(l)
  # print(int(s[l]-1)
  l1 = l-1
  print(int(s[l1])+int(s[l1-1]))
  # print(s[l1])
  # if l==0:
  #   return 0
  # elif l==1:
  #   return 1
  # else:
  #   return int(s[l])+int(sumd(s[l]-1))
sumd(45)