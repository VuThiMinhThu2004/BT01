#include "bits/stdc++.h"
#include <tuple>

using namespace std; 

pair<int,int> position(string s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--, right++;
    }
    return {left+1, right-1};
}

string longestPalindrome(string s) {
    int start = 0, end = 0;
    for (int i= 0; i < (int)(s.size()); i++) {
        int left1,left2,right1,right2;
        tie(left1, right1) = position(s,i,i);
        tie(left2, right2) = position(s,i,i+1);

        if (right1 - left1 >= end - start) {
            start = left1;
            end = right1;
        }
        if (right2 - left2 >= end - start) {
            start = left2;
            end = right2;
        }     
    }
    return s.substr(start,end-start+1);//(vitri bat dau, so luong phan tu can lay)
}

int main() {
    string s; getline(cin,s);
    cout << longestPalindrome(s);
}




/* 95/141 testcase
#include "bits/stdc++.h"
using namespace std;

bool ispanlindrome(string s) {
    for (int l = 0, r = s.size()-1; l < r; l++,r--) {
        if (s[l] != s[r])   return false;
    }
    return true;
}

int main() {
    string s; getline(cin,s);

    string res = "";

    for (int i= 0; i < s.size(); i++) {
        int pos = s.find(s[i],i+1);
        if (res.size() <= 1) res = s[i];
        //cout << i << " - " << pos << endl;
        while (pos < s.size()) {
            string temp = s.substr(i,pos-i+1);
            //cout << i << " - " << pos << "   " << temp << endl;
            if (ispanlindrome(temp) && temp.size() >= res.size()) {
                res = temp;
            }          
            pos = s.find(s[i],pos+1);  
        }
    }

    cout << res;
}
*/