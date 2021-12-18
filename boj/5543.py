if __name__ == '__main__':
    burger = []
    drink = []
    for x in range(3):
        a = int(input())
        burger.append(a)
    for y in range(2):
        b = int(input())
        drink.append(b)
    print(min(burger) + min(drink) - 50)
