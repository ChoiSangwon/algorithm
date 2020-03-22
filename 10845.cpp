#include<iostream>
#include<string>
using namespace std;
void push();
void pop();
void empty();
void Checkfront();
void Checkback();
void Checksize();

int Ssize=0;
int top=0;
int arr[10000];


int main(){
    int N;
    string name;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>name;
        if(name=="push")
            push();
        else if(name=="pop")
            pop();
        else if(name=="empty")
            empty();
        else if(name=="front")
            Checkfront();
        else if(name=="back")
            Checkback();
        else if(name=="size")
            Checksize();
    }
}
void Checksize(){
    cout<<Ssize-top<<endl;
}
void Checkback(){
    if(Ssize==top)
        cout<<-1<<endl;
    else
        cout<<arr[Ssize-1]<<endl;
}
void Checkfront(){
    if(Ssize==top)
        cout<<-1<<endl;
    else
        cout<<arr[top]<<endl;
}
void pop(){
    if(Ssize==top)
        cout<<-1<<endl;
    else
        cout<<arr[top++]<<endl;
}
void empty(){
    if(Ssize==top)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}

void push(){
    int new_N;
    cin>>new_N;
    arr[Ssize]=new_N;;
    Ssize++;
}