A, B = input(), input()
chk = []
for c in A:
    chk.append(c)

    if c == B[-1] and "".join(chk[-len(B):]) == B:
        del chk[-len(B):]
answer = "".join(chk)

print("FRULA" if len(chk) == 0 else "".join(chk))
