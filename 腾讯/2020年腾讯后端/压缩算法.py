"""
    小Q想要给他的朋友发送一个神秘字符串,但是他发现字符串的过于长了,
    于是小Q发明了一种压缩算法对字符串中重复的部分进行了压缩,
    对于字符串中连续的m个相同字符串S将会压缩为[m|S](m为一个整数且1<=m<=100),
    例如字符串ABCABCABC将会被压缩为[3|ABC],现在小Q的同学收到了小Q发送过来的字符串,
    你能帮助他进行解压缩么？
"""
from re import I


def decode(s):
    """
        深度搜索加递归
    """
    i = 0
    x, y, z = -1, -1, -1
    while i<len(s):
        if s[i] == '[':
            x = i
        elif s[i] == '|':
            y = i
        elif s[i] == ']':
            z = i
            break
        i += 1
    if x != -1 and y != -1 and z != -1:
        times = int(s[x+1:y])
        sub = s[y+1:z]
        decode_str = s[:x] + times * sub + s[z+1:]
        return decode(decode_str)
    return s

if __name__ == "__main__":
    print(decode("HG[3|B[2|CA]]F"),end='')