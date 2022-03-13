#include<iostream>
using namespace std;
int arr[10000];
int counta=0,sized=0;
void push_front(){
    for(int i=sized;i>counta;i--){
        arr[i]=arr[i-1];
    }
    cin>>arr[counta];
    sized++;
}
void push_back(){
    cin>>arr[sized++];
}
void size(){
    cout<<sized-counta<<endl;
}
void pop_front(){
    if(sized-counta==0)
        cout<<-1<<endl;
    else{
        cout<<arr[counta]<<endl;
        counta++;
    }
}
void pop_back(){
    if(sized-counta==0)
        cout<<-1<<endl;
    else{
        cout<<arr[sized-1]<<endl;
        sized--;
    }
}

void empty(){
    if(sized-counta==0)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
void front(){
    if(sized-counta==0)
        cout<<-1<<endl;
    else{
        cout<<arr[counta]<<endl;
    }
}
void back(){
    if(sized-counta==0)
        cout<<-1<<endl;
    else{
        cout<<arr[sized-1]<<endl;
    }
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string aaa;
        cin>>aaa;
        if(aaa=="push_front")
            push_front();
        else if (aaa=="push_back")
            push_back();
        else if (aaa=="pop_front")
            pop_front();
        else if (aaa=="pop_back")
            pop_back();
        else if (aaa=="size")
            size();
        else if (aaa=="empty")
            empty();
        else if (aaa=="front")
            front();
        else if (aaa=="back")
            back();
    }
}