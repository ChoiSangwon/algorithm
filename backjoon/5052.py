class Node:
    def __init__(self):
        self.data={}
        self.leaf=False

class Trie:
    def __init__(self):
        self.root = Node()

    def insert(self, s):
        cur_node = self.root # 처음 루트로 잡아준다
        for c in s: # 받은 문자열 하나하나에 대해서
            if c not in cur_node.data: # 현재 노드에 그 문자가 있으면 들어가고, 그렇지 않으면 새로 만든다
                cur_node.data[c] = Node()
            cur_node = cur_node.data[c]
        
        cur_node.leaf=True
 
    def search(self, s):
        cur_node = self.root
        for c in s:
            if c in cur_node.data:
                cur_node = cur_node.data[c]
            else:
                return False
        return True

arr = Trie()
arr.insert("aasdf")
arr.insert("aas213f")
arr.insert("aassdhaf")
print(arr.search("aa"))

# t = int(input())

# for i in range(t):
#     arr = Trie()
#     tmp=[]
#     flag = True
#     n = int(input())
#     for j in range(n):
#         a=input()
#         tmp.append(a)
#         arr.insert(a)
#     for j in tmp:
#         flag *= arr.search(j)
#     if(flag):
#         print("YES")
#     else:
#         print("NO")
        