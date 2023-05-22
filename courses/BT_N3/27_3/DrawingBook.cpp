#include <bits/stdc++.h>
using namespace std;
/*
Học sinh có thể mở từ phía trước (bắt đầu từ trang 1
) hoặc mở từ phía sau (bắt đầu từ trang N
) . Biết rằng các học sinh này lật từng tờ một và trang 1
 luôn nằm ở phía bên phải của cuốn sách.

 Mỗi tờ gồm 2
 trang ngoại trừ tờ cuối cùng có thể chỉ có một trang.

Viết chương trình in ra số tờ nhỏ nhất cần lật để tới được trang p
input:
    Gồm hai nguyên dương N và p, trong đó:
    N là số trang của cuốn sách 
    p là vị trí trang cần lật tới

output:
    số tờ nhỏ nhất cần lật để tới được trang p
*/
int main() {
    int n,p; cin >> n >> p;

    cout << min(p/2,(n+1-p - n%2)/2);
}