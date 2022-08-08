import sys
tree={}
count=0
while True:
    a=sys.stdin.readline().strip()
    if a == '':
        break
    if(a not in tree):
        tree[a]=1
    else:
        tree[a]+=1
    count+=1
aa=dict(sorted(tree.items()))
for i in aa:
    a = aa[i]
    print("%s %.4f" %(i,a/count*100))