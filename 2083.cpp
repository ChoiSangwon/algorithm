#include<stdio.h>
#include<string.h>
using namespace std;
class club{
public:
    char name[11];
    char aa[10];
};
int main(){
    club arr[100000];
    int i=0;
    while(1){
        int age,weight;
        scanf("%s%d%d",arr[i].name,&age,&weight);
        if(strcmp(arr[i].name,"#")==0&&age==0&&weight==0)
            break;
        if(age>17||weight>=80)
            strcpy(arr[i].aa,"Senior");
        else
            strcpy(arr[i].aa,"Junior");
        i++;
    }
    for(int j=0;j<i;j++)
        printf("%s %s\n",arr[j].name,arr[j].aa);
}