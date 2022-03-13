#include<iostream>
using namespace std;
int main(){
    int N,M,arr[51][51],countsum=1,maxl=0;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            char a;
            scanf(" %c",&a);
            arr[i][j]=a-'0';
        }
        //getchar();
    }
    maxl=max(N,M);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            
            // k는 정사각형의 한 변을 k만큼 늘려가면서 찾아보기 위함
            for (int k = 1; k <= maxl; k++) {
 
                // 세로의 길이는 n보다 작아야 하고, 가로의 길이는 m보다 작아야 하며
                // 정사각형의 네 꼭짓점의 값이 모두 같다면
                if (i + k < N && j + k < M && arr[i][j] == arr[i + k][j] 
                    && arr[i + k][j] == arr[i][j + k]
                    && arr[i][j + k] == arr[i + k][j + k]) {
 
                    // 그때의 정사각형 크기를 ret에 담아줍니다
                    if (countsum < (k + 1)*(k + 1)) countsum = (k + 1)*(k + 1);
                }
            }
        }
    }
    cout<<countsum<<endl;
    /*
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ",arr[i][j]);
        }
        cout<<endl;
    }*/
}