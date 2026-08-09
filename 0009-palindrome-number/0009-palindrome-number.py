class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        num=x
        temp=0
        while num!=0:
            temp=temp*10+num%10
            num=num//10
        return temp==x