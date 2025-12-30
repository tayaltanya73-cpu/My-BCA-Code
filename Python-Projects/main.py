# WAP to check if a number enterd by the user is odd or even

num =int(input("enter number: "))
if(num%2==0):
    print("EVEN")
else:
    print("ODD")

a = int(input("enter first number:"))
b = int(input("enter second number:"))
c = int(input("enter third number:"))
d = int(input("enter forth number:"))
if(a>=b and a>=d):
    print("first number is largest",a)
elif(b>=c and b>=d):
    print("second number is largest",b)
elif(b>=d):
    print("third number is largest:",c)
else:
    print("forth number is largest",d)

x = int(input("enter number:"))

if(x % 7 ==0):
    print("multiple of 7")
else:
    print("not a multiple")
