class Solution:
    def reverseVowels(self, s: str) -> str:
        vowel="aeiouAEIOU"
        low=0
        high=len(s)-1
        cl=list(s)
        while low<high :
            if cl[low] in vowel and cl[high] in vowel:
                cl[low],cl[high]=cl[high],cl[low]
                low+=1
                high-=1
            elif cl[low] in vowel and cl[high] not in vowel:
                high-=1
            elif cl[low]  not in vowel and cl[high] in vowel:
                low+=1
            else:
                low+=1
                high-1
        return "".join(cl)

        