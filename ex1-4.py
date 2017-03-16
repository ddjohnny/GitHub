def reverse_complement(dna):
    dna = {'A': 'T', 'T': 'A', 'G': 'C', 'C': 'G'}
    result = ''
    
    for i in text:
        result += dna[i]
        
    return result[::-1]

text = "AAAACCCGGT"
print(reverse_complement(text))
