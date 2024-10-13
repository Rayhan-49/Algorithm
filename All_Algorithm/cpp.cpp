#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> arr1, arr2;
    long long sum = ((n+1)*n)/2;
    if( sum % 2 != 0){
        cout << "NO\n";
    }
    else{
        sum /= 2;
        vector<long long> arr1,arr2;
        long long count = 0;
        long long sum1 = sum, sum2 = sum;
        for(long long i = n; i > 0; i--){
            if( count % 2 == 0 && sum1 != 0){
                if( sum1 >= i){
                    arr1.push_back(i);
                    sum1 -= i;
                }
                else{
                    arr1.push_back(sum1);
                    sum1 = 0;
                    i++;
                }
                count++;

            }
            else{
                if( sum2 >= i){
                    if( i != arr1.back()){
                        arr2.push_back(i);
                    sum2 -= i;
                    }
                }
                count++;
            }
        }

        cout << "YES\n";
        cout << arr1.size() << "\n";
        for(long long x : arr1){
            cout << x << " ";
        }
        cout << "\n" << arr2.size() << "\n";
        for(long long x : arr2){
            cout << x << " ";
        }
        cout << "\n";
    }
}