// https://open.kattis.com/problems/quickbrownfox

import string

n = int(input())

alpha = set(string.ascii_lowercase)

for i in range(n):

    text = input().replace(" ", "").lower()
    
    chars = set()
    l = set()
    
    for j in text:
    
        l.add(j)
        
        if j in alpha:
            chars.add(j)
            
    if len(chars) == 26:
        print("pangram")
        
    else:
        print("missing", "".join(sorted(alpha-l)))