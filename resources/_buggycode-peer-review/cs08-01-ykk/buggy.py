''' Code truncated to focus on the most important part '''
def exact_change(user_total):
    nickels = 0
    if user_total <= 0:
        print('no change')

    if user_total >= 5:
        if (user_total//5) == 1:
            nickles = user_total//5
            user_total = user_total%5
            print(nickles, 'nickel')
    elif (user_total//5) > 1:
            nickles = user_total//5
            user_total = user_total%5
            print(nickles, 'nickels')

    if user_total >= 1:
        if user_total == 1:
            print(user_total, 'penny')
        elif user_total > 1:
            print(user_total, 'pennies')

    return nickels

if __name__ == '__main__': 
    input_val = int(input())
    ''' Type your code here. '''
    exact_change(input_val)
