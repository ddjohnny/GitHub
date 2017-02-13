a = 121
b = 55

# not rec:
#
#while a!= 0 and b != 0:
#    if a > b:
#        a = a % b
#    elif a < b:
#        b = b % a
#
#print(a+b)


def nod(a,b):
    if b!= 0:
        return nod(b,a%b)
    else:
        return a

print(nod(a,b))
