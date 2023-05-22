#include "bits/stdc++.h"
using namespace std;

map<string,int> mp;
int main() {
    
        string s;
        
        vector<string> v;
        for (int i= 1; i <= 5; i++) {

            cin >> s;
            int pos1 = s.find(",");
            int pos2 = s.find("@");

            string res = "";

            for (int i = pos1+1; i < pos2; i++) {
                res += s[i];
            }

            mp[res]++;
            if (mp[res] > 1) {
                v.push_back(res);
                mp[res] = -1e6-5;
            }
        
        }

        sort(v.begin(),v.end());

        for (auto it:v) {
            cout << it << endl;
        }       
    
}

/*
0375556789,vinhls@gmail.com
09871314412,longtq@vnu.edu.vn
0931931111,longtq@yahoo.com.vn
19001008,sonpb@vnu.edu.vn
01675556789,vinhls@vnu.edu.vn

*/

