for i in range(int(input())):
    l = sorted(map(int, input().split()))
    print(
        f"Scenario #{i+1}:\n{'yes' if l[0]**2 + l[1]**2 == l[2]**2 else 'no'}\n")
