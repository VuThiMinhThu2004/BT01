#include <bits/stdc++.h>
using namespace std;
vector <string> se;
map<char, bool> used;
void Generate(string s, int length, string pre){
    if((int)pre.size() == length){
        se.push_back(pre);
        return;
    }

    for(int i = 0; i < (int) s.size(); i++){
        if(!used[s[i]]){
            used[s[i]] = true;
            string newpre = pre + s[i];
            Generate(s, length, newpre);
            used[s[i]] = false;
        }
    }

}
void generateAll(string s, int maxlength){
    for(int len = 1; len <= maxlength; len++){
        Generate(s, len, "");
    }
    for(int i = 0; i < (int)se.size(); i++){
        cout<<se[i]<<endl;
    }
}
int main(){
    int n; cin>>n;
    string s; cin>>s;
    generateAll(s, n);
    return 0;
}