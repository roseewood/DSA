# 1) A function to check if a number is a palindrome (e.g., 121) without converting it to a string

# A palindrome is a word, number, phrase, or sequence of characters that reads the same forward as it does backward.

def is_palindrome(num):
    if num < 0:
        return False
    
    original_num = num
    reversed_num = 0

    while num > 0:
        last_digit = num % 10  
        reversed_num = reversed_num * 10 + last_digit  
        num //= 10  

    return original_num == reversed_num 

# Examples:
print(is_palindrome(121))  # This is True
print(is_palindrome(-121)) # This is False
print(is_palindrome(123))  # This is also False


