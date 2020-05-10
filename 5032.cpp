#include <iostream>
using namespace std;
 
int main() {
    int e, f, c, cnt,empty;
    cin >> e >> f >> c;
    cnt = (e+f)/c;
    empty = cnt + (e + f) % c;
    while (empty/c){
        cnt += (empty / c); 
        empty = ((empty/c) + (empty % c)); 
    }
    cout << cnt;
    return 0;
}
