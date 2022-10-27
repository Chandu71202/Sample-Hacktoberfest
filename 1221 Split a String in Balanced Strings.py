class Solution:
    def balancedStringSplit(self, s: str) -> int:
        
        #65 ms
        stack=[]
        res=0
        for i in s:
            if stack==[]:
                res+=1
                stack.append(i)
            elif i==stack[-1]:
                stack.append(i)
            else:
                stack.pop()
        return res
        
        # 84ms
        # m = c = 0
        # for i in s:
        #     if i == 'L': c += 1
        #     if i == 'R': c -= 1
        #     if c == 0: m += 1
        # return m
