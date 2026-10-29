a = float(input("Введите первое число: "))
b = float(input("Введите второе число: "))
c = float(input("Введите третье число: ")) 
#Проверка введеных ранее чисел на максимум
if a >= b and a >= c:
    maximum = a
elif b >= a and b >= c:
    maximum = b
else:
    maximum = c
#Вывод максисмума из трех чисел
print(f"Максимум: {maximum}")