x = list(input().split())
print("ascending" if "".join(x) == "".join(sorted(x))
      else "descending" if "".join(x)[::-1] == "".join(sorted(x)) else "mixed")
