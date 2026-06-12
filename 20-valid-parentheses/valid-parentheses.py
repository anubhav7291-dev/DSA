class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        mapping={
            ')':'(',
            ']':'[',
            '}':'{'
        }
        open_brackets=set(mapping.values())
        for ch in s:
            if ch in open_brackets:
                stack.append(ch)
            else:
                if not stack:
                    return False
                if stack[-1] !=mapping[ch]:
                    return  False
                stack.pop()
        return len(stack) == 0