def digits_even(n):
    for digit in str(n):
        if int(digit) % 2 != 0:  
            return False
    return True

def even_digit_squares(start, end):
    result = []
    
    start_sqrt = int(start**0.5)  
    end_sqrt = int(end**0.5)     
    
    for i in range(start_sqrt, end_sqrt + 1):  
        square = i ** 2
        if digits_even(square):           
            result.append(square)
    
    return result

start_range = int(input("Enter the start of the range: "))
end_range = int(input("Enter the end of the range: "))

result = even_digit_squares(start_range, end_range)
print("Perfect squares with all even digits in the given range:", result)