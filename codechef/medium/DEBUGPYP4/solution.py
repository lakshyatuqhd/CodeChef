# your code goes here
a, b, c, d = map(int, input().split())
p = a - c # price of tv1 after discount was calculated wrong
q = b - d # price of tv2 after discount was calculated wrong
if p < q:
    print("First")
elif p > q:
    print("Second")
else:
    print("Any")
