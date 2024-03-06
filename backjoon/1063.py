a={'A':0,'B':1,'C':2,'D':3,'E':4,'F':5,'G':6,'H':7}
b = {v: k for k, v in a.items()}
d = {'R':(0,1),'L':(0,-1),'B':(-1,0),'T':(1,0),'RT':(1,1),'LT':(1,-1),'RB':(-1,1),'LB':(-1,-1),}

king, stone,n=input().split()
n=int(n)

king_loc = [int(king[1])-1,a[king[0]]]
stone_loc = [int(stone[1])-1,a[stone[0]]]

for _ in range(n):
    move=input()
    i,j = d[move]
    if 0<=king_loc[0]+i<8 and 0<=king_loc[1]+j<8:
        if(king_loc[0]+i==stone_loc[0] and king_loc[1]+j==stone_loc[1]):
            if(0<=stone_loc[0]+i<8 and 0<=stone_loc[1]+j<8):
                stone_loc[0]+=i
                stone_loc[1]+=j
                king_loc[0]+=i
                king_loc[1]+=j
        else:
            king_loc[0]+=i
            king_loc[1]+=j
            
print(b[king_loc[1]]+str(king_loc[0]+1))  
print(b[stone_loc[1]]+str(stone_loc[0]+1))


# A1 A2 5