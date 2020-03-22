#include<iostream>
using namespace std;
int main(){
    int A,B,C,D,count,G;
    cin>>A>>B>>C>>D;
    A=A*D+B*C;
    B*=D;
    while(1){
        if(A==B){
            A=1;
            B=1;
            break;
        }
        G=(A>B)?A:B;
        count=0;
        for(int i=2;i<G/2;i++){
            if(A%i==0&&B%i==0){
                A/=i;
                B/=i;
                break;
            }
            count++;
        }
        if(count==G/2-2||G<4)
            break;
    }
    cout<<A<<" "<<B<<endl;
}