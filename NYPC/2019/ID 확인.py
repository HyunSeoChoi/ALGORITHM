import re

n = int(input())

for i in range(n):
    stri = input()
    if re.match("^[a-zA-Z0-9.-]+@[a-zA-Z0-9.-]+$", stri):
        print("Yes")
    else:
        print("No")
