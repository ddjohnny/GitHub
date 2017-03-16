def pattern_count(text, pattern):
    count = 0

    for i in range(len(text) - len(pattern) + 1):
        if text[i:i+len(pattern)] == pattern:
            count += 1

    return count


def frequent_words(text, k):
    count = []
    
    for i in text:
        count.append(0)

    for i in range(len(text) - k + 1):
        pattern = text[i:i+k]
        count[i] = pattern_count(text, pattern)

    max_count = max(count)
    
    result = set()
    for i,sum in enumerate(count):
        if sum == max_count:
            result.add(text[i:i+k])
            
    return result
    
    
print(frequent_words("ACGTTGCATGTCGCATGATGCATGAGAGCT", 4))
