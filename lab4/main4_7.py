a = float(input("Введите сторону a: "))
b = float(input("Введите сторону b: "))
c = float(input("Введите сторону c: "))
if a + b > c and a + c > b and b + c > a:
    if a == b == c:
        print("Равносторонний треугольник")
    elif a == b or a == c or b == c:
        print("Равнобедренный треугольник")
    else:
        print("Разносторонний треугольник")
else:
    print("Треугольник не существует")