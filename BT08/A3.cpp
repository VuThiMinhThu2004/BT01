#include <bits/stdc++.h>
using namespace std;

int size_of(char a[]) {
    int cnt =0;
    for (char *cp = a; (*cp) != '\0'; cp++) {
       cnt++;
    } 
    return cnt;
}

void swap_pointers(char **x, char **y) {
   char* tmp;

   tmp = *y;
   *y = *x;
   *x = tmp;
}

int main() {
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(&s1,&s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
    
   return 0;
}

//Sửa lỗi.