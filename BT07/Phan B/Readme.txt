Câu 1: Cho đoạn lệnh sau:
    char c = 'A', d = 'B';
    char *p1 = &c;
    char *p2 = &d;
    char *p3;

    địa chỉ c = 0x1234
    địa chỉ d = 0x5678
    Output?
    p3 = &d;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;// => *p3 = B p3 = 0x5678
    p3 = p1;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;// => *p3 = A p3 = 0x1234
    cout << "*p1 = " << *p1 << ", p1 = " << p1 << endl;// => *p3 = A p3 = 0x1234

Câu 2: Cho các lệnh sau:
    int *p;
    int i;
    int k;
    i = 4;
    k = i;
    p = &i;

    Lệnh nào sẽ gán cho i giá trị bằng 5?
    k = 5;
    *k = 5;
    p = 5;
    *p = 5; // <- đáp án

Câu 3: giải thích lỗi sau:
    char c = 'C';
    double *p = &c; // loi kieu du lieu

