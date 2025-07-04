//Given the row number n. Print the n-th row of Pascal’s triangle.
#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void pascalTriangle(int n) {
    for (int c = 1; c <= n; c++) {
        cout << nCr(n - 1, c - 1) << " ";
    }
    cout << "\n";
}

int main()
{
    int n = 5;
    pascalTriangle(n);
    return 0;
}

