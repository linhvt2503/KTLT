#include <iostream>
#include <stdio.h>

using namespace std;
//2 so
#define MAX(a,b) ((a)>(b)?(a):(b))
#define swap(a,b) (a = a + b, b = a - b, a = a - b)
#define swap1(a,b) {a = a + b; b = a - b; a = a - b}
#define check(n) ((n)%2==0?1:0)

int main(){
	int x = 3, y = 8, z = 12, t = 1;
	//su dung macro MAX
	cout << "So lon nhat la: " << MAX(MAX(x,y), MAX(z,t)) << endl;
	//su dung macro swap
	cout << x << "," << y << endl;
	swap(x,y);
	cout << "Sau hoan doi la: "<<x<<" ,"<< y << endl;
	cout << z << "," << t << endl;
	swap(z,t);
	cout << "Sau hoan doi la: "<<z<<" ,"<< t << endl;
	
	cout << x << " "<< (check(x) ? "la" : "khong la") << " so chan." << endl;
    cout << y << " "<< (check(y) ? "la" : "khong la") << " so chan." << endl;
    cout << z << " "<< (check(z) ? "la" : "khong la") << " so chan." << endl;
    cout << t << " "<< (check(t) ? "la" : "khong la") << " so chan." << endl;
}





