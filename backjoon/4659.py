moum = ['a','e','i','o','u']
while True:
    tmp = input()
    if tmp=='end':
        break
    check = True
    if(moum[0] not in tmp and moum[1] not in tmp and moum[2] not in tmp and moum[3] not in tmp and moum[4] not in tmp):
        print('<{0}> is not acceptable.'.format(tmp))
        continue

    for i in range(len(tmp)-2):
        if((tmp[i] in moum and tmp[i+1] in moum and tmp[i+2]in moum ) or (tmp[i] not in moum and tmp[i+1] not in moum and tmp[i+2] not in moum ) ):
            print('<{0}> is not acceptable.'.format(tmp))
            check=False
            break
    if(not check):
        continue
    for i in range(len(tmp)-1):
        if(tmp[i]==tmp[i+1] and tmp[i]!='e' and tmp[i]!='o'):
            print('<{0}> is not acceptable.'.format(tmp))    
            check=False
            break
    if check:
        print('<{0}> is acceptable.'.format(tmp))