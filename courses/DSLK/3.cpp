
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void createWords(string s, vector<string>& words, string current_word, int length) {
    if ((int)(current_word.size()) == length) {
        words.push_back(current_word);
        return;
    }

    for (int i = 0; i < (int)(s.size()); i++) {
        //if(current_word.find(s[i]) < (int)(current_word.size())) continue;
        if (current_word.find(X[i]) != std::string::npos) continue;
        createWords(s, words, current_word + s[i], length);
    }
}

int main() {
    int n; cin >> n;
    cin.ignore();
    string s;
    cin >> s;

    vector<string> words;

    for (int i=1; i <= n; i++) {
        createWords(s, words, "", i);
    }
    
    for (int i = 0; i < (int)(words.size()); i++) {
        cout << words[i] << "\n";
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
vector <string> se;
map<char, bool> used;
void Generate(string s, int length, string pre){
    if(pre.size() == length){
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
    for(auto x: se){
        cout<<x<<endl;
    }
}
int main(){
    int n; cin>>n;
    string s; cin>>s;
    generateAll(s, n);
}
*/