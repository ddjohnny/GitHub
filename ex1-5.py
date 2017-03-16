def pattern_matching(text, pattern):
    
    pos = []
    
    for i in range(len(text) - len(pattern) + 1):
        if text[i:i+len(pattern)] == pattern:
            pos.append(i)
    
    return pos

print(pattern_matching("GATATATGCATATACTT", "ATAT"))
