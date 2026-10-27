print("Конвертер валют")
print("1. Перевод USD в RUB")
print("2. Перевод EUR в RUB")
print("3. Перевод RUB в USD")
print("4. Перевод RUB в EUR")

choice = input("Ваш выбор (1-4): ")

if choice == "1":
    usd = float(input("Введите сумму в USD: "))
    rub = usd * 92.5
    print(f"{usd:.2f} USD = {rub:.2f} RUB")
elif choice == "2":
    eur = float(input("Введите сумму в EUR: "))
    rub = eur * 100.0
    print(f"{eur:.2f} EUR = {rub:.2f} RUB")
elif choice == "3":
    rub = float(input("Введите сумму в RUB: "))
    usd = rub / 92.5
    print(f"{rub:.2f} RUB = {usd:.2f} USD")
elif choice == "4":
    rub = float(input("Введите сумму в RUB: "))
    eur = rub / 100.0
    print(f"{rub:.2f} RUB = {eur:.2f} EUR")
else:
    print("Некорректный выбор")