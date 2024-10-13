#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; double f;
    cin >> f;

    vector<double> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    vector<vector<double>> v(n, vector<double>(n));

    
    for (int i = 0; i < n; i++) {
        v[i][0] = y[i];  
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            v[i][j] = v[i + 1][j - 1] - v[i][j - 1]; 
        }
    }

    double ans = y[0]; 
    double p = (f - x[0]) / (x[1] - x[0]); 
    double k = 1;
    int fact = 1;

    for (int j = 1; j < n; j++) {
        k *= (p + 1 - j); 
        fact *= j;       
        ans += (v[0][j] * k) / fact;
    }

    cout << ans << endl; 

    return 0;
}
/*
6
38 
15 0.26
20 0.34
25 .42
30 0.5
35 0.57
40 0.64*/