if __name__ == '__main__':
    n, x = map(int, input().split())
    nums = list(map(int, input().split()))
    arr = []
    for i in range(n):
        if nums[i] < x:
            arr.append(str(nums[i]))
        else:
            continue
    res = " ".join(arr)
    print(res)
