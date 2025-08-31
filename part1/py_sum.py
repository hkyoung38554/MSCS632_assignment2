# file: py_sum.py
# Intentional mistakes: missing colon, 'o' instead of 0

def calculate_sum(arr)   # <- missing colon
    total = o            # <- 'o' is not defined
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)
