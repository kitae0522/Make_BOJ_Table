month, day = map(int, input().split())
n = 0
last_day = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
for i in range(month-1):
    n = n+last_day[i]
n = n + day
print(week[n % 7])
