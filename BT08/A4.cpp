#include "bits/stdc++.h"
using namespace std;

int main()  { 
   char **s; 
   char foo[] = "Hello World"; 
   char *str = foo;
   *s = str; 
   printf("s is %s\n", *s); 
   s[0] = foo; 
   printf("s[0] is %s\n",s[0]); 
   return(0); 
}
