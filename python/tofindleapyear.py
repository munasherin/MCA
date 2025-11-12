current_year=2025
final_year=int(input("enter the final year:"))
print("leap year are:")
for year in range(current_year,final_year +1):
    if (year%400==0) or (year%4==0 and year%100!=0):
        print(year)
    