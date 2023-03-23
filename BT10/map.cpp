#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string,int> scores;

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        int type, Y;
        string X;
        cin >> type >> X;
        if (type == 1) {
            cin >> Y;
            scores[X] += Y;
        } else if (type == 2) {
            scores[X] = 0;
        } else if (type == 3) {
            cout << scores[X] << endl;
        }
    }
    return 0;
}