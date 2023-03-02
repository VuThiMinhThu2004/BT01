#include "bits/stdc++.h"
using namespace std;

int main() {
    double sum=0;
    int cnt =0;
    while(1)
    {
        double n;
        cin>>n;
        if(n >=0 && n <=10)
        {
           sum +=n;
           cnt++;
        }
        else if(n < 0) break;
    }
    cout<<fixed<<setprecision(2)<< sum/cnt;
}
