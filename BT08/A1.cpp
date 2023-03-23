#include <bits/stdc++.h>
using namespace std;

void f(int xval) {
   int x;
   x = xval;
   cout << &x << endl;// in địa chỉ của x tại đây
}
void g(int yval) {
   int z,y,t;
   cout << &t << " " << &y << " " << &z;// in địa chỉ của y tại đây
}
int main() {
   f(7);
   g(11);
   return 0;
} 

/*
 Để in ra địa chỉ của biến x trong hàm f() và của biến y trong hàm g(). 
 Bạn có nhận xét gì về địa chỉ của hai biến đó, thử giải thích vì sao.
 => 2 biến x,y có cùng 1 địa chỉ = 0x61fdec
    giải thích: Do các biến trong hàm void được đưa vào ngăn xếp nên các biến hơn kém nhau 1 byte 
        biến được khai báo đầu tiên thì sẽ có địa chỉ lớn nhất vì nó sẽ được đặt dưới cùng của ngăn xếp.
        Sau khi sử dụng xong kết thúc hàm f -> hệ điều hành thu hồi lại bộ nhớ => sau đó lại cung cấp cho hàm g
*/
