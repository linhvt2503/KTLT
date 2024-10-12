#include <iostream>
#include <math.h>

using namespace std;
//ham nguyen mau
void checkNT(int n);
int UCLN(int a, int b);


//a.Ktra so nguyen to
void checkNT(int n){
		if(n % 2 == 1)
			cout << n << " La so nguyen to"<< endl;
		else
			cout << n << " Khong la so nguyen to" << endl;
}

//b.Tim UCLN
int UCLN(int a, int b){
	while(b != 0){
		int t = b;
		b = a % b;
		a = t;
	}
	return a; //Khi a = 0 thi b là UCLN
}

//c.armstrong


int main(){
	int n;
	cout <<"Nhap vao mot so: ";
	cin >> n;
	//a
	checkNT(n);
	
	//b
	int a, b;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "UCLN la: " << UCLN(a,b);
	
}
