arr = [1, 2, 3]
for _ in range(int(input())):
    x, y = map(int, input().split())
    x_index, y_index = arr.index(x), arr.index(y)
    arr[x_index], arr[y_index] = arr[y_index], arr[x_index]
print(arr[0]) 
