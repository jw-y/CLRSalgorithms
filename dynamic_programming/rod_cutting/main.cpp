#include <iostream>

using namespace std;

int rod_cutting(int* p, int n);

int p[11]{0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

int main(){
    int n = 10; 
    cout << rod_cutting(p, n) <<endl;
    return 0;
}

int rod_cutting(int* p, int n){
    int r[n+1];
    r[0] = 0;
    for(int j=1; j<=n; j++){
        int q = -1;
        for (int i=1; i<=j; i++){
            q = max(q, p[i]+r[j-i]);
        }
        r[j]  = q;
    }
    return r[n];
}