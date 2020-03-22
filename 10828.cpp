#include<iostream>
#include<string>
using namespace std;
void push();
void pop();
void empty();
void Checktop();
void Checksize();

int Ssize=0;
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
        else if(name=="top")
            Checktop();
        else if(name=="size")
            Checksize();
    }
}
void Checksize(){
    cout<<Ssize<<endl;
}
void Checktop(){
    if(Ssize==0)
        cout<<-1<<endl;
    else
        cout<<arr[Ssize-1]<<endl;
}
void pop(){
    if(Ssize==0)
        cout<<-1<<endl;
    else
        cout<<arr[--Ssize]<<endl;
}
void empty(){
    if(Ssize==0)
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