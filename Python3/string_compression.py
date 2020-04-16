class Solution:
    def compress(self, chars: List[str]) -> int:
        count = 1
                
        for i in range(len(chars)-1, -1, -1):
            if i and chars[i] == chars[i-1]: 
                count += 1
                chars.pop(i)
            else:
                if count > 1:
                    for num in str(count)[::-1]:
                        chars.insert(i+1, num)
                count = 1
        
        return len(chars)
