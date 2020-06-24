from cs50 import get_float

num = get_float("")
num *=100


quarters = int(num/25)
dimes = int((num%25)/10)
nickels = int(((num%25)%10)/5)
pennies = int(((num%25)%10)%5)


total = quarters + dimes + nickels + pennies

print(f"{total}")
