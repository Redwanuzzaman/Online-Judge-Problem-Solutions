class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        result = []
        row_1 = "qwertyuiop"
        row_2 = "asdfghjkl"
        row_3 = "zxcvbnm"
        for word in words:
            if row_1.find(word[0].lower()) != -1:
                flag = True
                for i in word:
                    if row_1.find(i.lower()) == -1:
                        flag = False
                if flag:
                    result.append(word)
            elif row_2.find(word[0].lower()) != -1:
                flag = True
                for i in word:
                    if row_2.find(i.lower()) == -1:
                        flag = False
                if flag:
                    result.append(word)
            elif row_3.find(word[0].lower()) != -1:
                flag = True
                for i in word:
                    if row_3.find(i.lower()) == -1:
                        flag = False
                if flag:
                    result.append(word)
        return result
                
