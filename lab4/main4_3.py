age = int(input("Введите возраст: "))
#Классификация возраста и вывод
if age < 0:
    print("Некорректный возраст")
elif age <= 12:
    print("Ребёнок")
elif age <= 17:
    print("Подросток")
elif age <= 64:
    print("Взрослый")
else:
    print("Пожилой")