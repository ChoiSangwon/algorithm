

while True:
    try:
        arr = list(map(str,input().split()))
        check=[True,False,True,False,False]

        for i in range(len(arr)):
            if(arr[i]=="dip"):
                check[4]=True
                if(i>1 and arr[i-2]!="jiggle"):
                    arr[i]='Dip'
                    check[0]=False
                if(i>0 and arr[i-1]!="jiggle"):
                    arr[i]='Dip'
                    check[0]=False
                if(i<len(arr)-1 and arr[i+1]!='twirl'):
                    arr[i]='Dip'
                    check[0]=False

        if(arr[0]!="jiggle"):
            check[3]=True
        if(len(arr)>3 and arr[-3]=="clap" and arr[-2]=='stomp' and arr[-1]=='clap'):
            check[1]=True
        if("twirl" in arr and "hop" not in arr):
            check[2]=False
            
        if False not in check:
            print(*check)
            print("form ok:",*arr)
        else:
            tmp=[]
            for i in range(len(check)):
                if(check[i]==False):
                    tmp.append(str(i+1))
            if(len(tmp)==1):
                print("form error "+tmp[0]+" :",*arr)
            elif(len(tmp)==2):
                print("form errors "+tmp[0]+" and "+tmp[1],":",*arr)
            elif(len(tmp)==3):
                print("form errors "+tmp[0]+", "+tmp[1]+" and "+tmp[2],":",*arr)
            elif(len(tmp)==4):
                print("form errors "+tmp[0]+", "+tmp[1]+", "+tmp[2]+" and "+tmp[3],":",*arr)
            elif(len(tmp)==5):
                print("form errors "+tmp[0]+", "+tmp[1]+", "+tmp[2]+", "+tmp[3]+" and "+tmp[4],":",*arr)

    except EOFError:
        break