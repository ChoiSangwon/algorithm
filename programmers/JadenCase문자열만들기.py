def solution(s):
    answer=""
    for i in range(len(s)):
        if(i==0):
            answer+=s[i].upper()
        elif(s[i-1]==' 'and s[i]!=' '):
            answer+=s[i].upper()
        else:
            answer+=s[i].lower()
    return answer