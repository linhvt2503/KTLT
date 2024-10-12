#include <iostream>
#include <math.h> 

using namespace std;

// a.kiem tra
bool check(float a, float b, float c) {
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    	return true;
    return false;
}

// b. Hàm tính di?n tích tam giác
float TinhDT(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


int main() {
    float a, b, c;  // Khai báo bi?n
    cout << "Nhap 3 canh cua tam giac" << "\n";
    cout << "Canh a:  "; cin >> a;
    cout << "Canh b:  "; cin >> b;
    cout << "Canh c:  "; cin >> c;

    if (check(a, b, c)) {
        cout << "Dien tich cua tam giac: " << TinhDT(a, b, c);
    } else {
        cout << "3 canh khong phai la canh tam giac";
    }

    return 0;  // K?t thúc chuong trình
}

