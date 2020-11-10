def countsetbits(n):
    setbits = 0
    while (n):
        n = n & (n - 1)
        setbits = setbits  + 1

    return setbits


num = int(input())
res =countsetbits(num)
print(res)

