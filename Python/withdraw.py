def withdrawal(balance, amount):
    if (balance >= amount):
        balance = balance - amount
    print("The balance now is $", balance)



withdrawal(1000000, int(input("What's the amount you wish to withdraw? ")))