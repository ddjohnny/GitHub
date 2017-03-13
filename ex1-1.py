input = open('data1/Vibrio_cholerae.txt', 'r')
dna = {'A':0,'C':0,'G':0,'T':0}

while True:
    i = input.read(1)

    if not i:
        break

    if i in dna:
        dna[i] += 1

print(dna)
