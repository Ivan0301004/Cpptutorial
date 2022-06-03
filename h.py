

def power(base,expo):
   result = 1
   count = 0

   for i in range (0, expo):
      result *= base
      count += 1
   return result

num = int(input ("Enter the base : "))
num2 = int(input ("Enter the exponent : "))
print("The result of power is : ", power(num, num2))


