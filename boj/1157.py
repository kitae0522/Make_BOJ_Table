from collections import Counter

if __name__ == "__main__":
    a = input().upper()
    b = Counter(a)
    li = []
    for idx, value in b.items():
        if value == max(b.values()):
            li.append(idx)
            if len(li) > 1:
                break
        
    if len(li) == 1:
        print(li[0])
    else:
        print("?")
