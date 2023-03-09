#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

int GetRandom(int min,int max) {
    return min + (int)(rand()*(max-min+1.0)/(1.0 + RAND_MAX));
}
int main() {
    srand((unsigned int)time(NULL));
    int n; cin >> n; int a[n+5];
    for (int i=1; i <= n; i++) {
        a[i] = GetRandom(0,49);
    }

    for(int i=1; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            for(int k = j=1; k <= n; k++) {
                if((a[i]+a[j]+a[k])%25 == 0)
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
            }
        }
    }
}