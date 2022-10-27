class Solution(object):
    def lengthOfLongestSubstring(self, s):
        seen = ''
        mx = 0
        for c in s:
            if c not in seen:
                seen+=c
            else:
                seen = seen[seen.index(c) + 1:] + c
            mx = max(mx, len(seen))
        print(seen)
        return mx
