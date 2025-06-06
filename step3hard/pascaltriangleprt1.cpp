//n this case, we are given the row number r and the column number c, and we need to find out the element at position (r,c). 
#include <bits/stdc++.h>
using namespace std;
int nCr(int n,int r) {
    long long res=1;
    for(int i =0;i<r;i++) {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}
int main() {
    int r=5;
    int c=3;
    int element=pascalTriangle(r,c);
    cout<< "the element at pos (r,c) is:"<<element<<"\n";
    return 0;
}

        
         
