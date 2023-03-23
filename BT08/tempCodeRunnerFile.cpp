   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   cout << s1 << endl << s2 << endl << endl;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;