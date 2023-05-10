
#!/usr/bin/python3
import random

# Generate a random integer between -100 and 100 (inclusive)
number = random.randint(-100, 100)

# Check if the number is positive, negative, or zero, and print the appropriate message
if number > 0:
    print(number, "is positive")
elif number == 0:
    print(number, "is zero")
else:
    print(number, "is negative")

print()
