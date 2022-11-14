def withdrawal(balance, amount):
    if (balance >= amount):
        balance = balance - amount
    return balance

deposit = withdrawal(1000000, int(input("What's the amount you wish to withdraw? ")))

if (deposit <= 50):
    print("You need to make a deposit!")
else:
    print("You're good to go!")


