class Solution(object):
    def lengthOfLongestSubstring(self, s):
        start = maxLength = 0
        usedChar = {}
        
        for i in range(len(s)):
            if s[i] in usedChar and start <= usedChar[s[i]]:
                start = usedChar[s[i]] + 1
            
            maxLength = max(maxLength, i - start + 1)
            usedChar[s[i]] = i

        return maxLength