#include <iostream>

using namespace std;

//ham noi tuyen
inline int Tich(int a, int b){
	return a * b;
}

//ham doi so mac dinh
int TinhTien(int kw, int m3, int giadien=4, int gianuoc=10){
	return kw*giadien + m3*gianuoc;
}

int Mu(int a, int n = 2){
	int s = 1;
	for(int i = 1; i <= n; i++){
		s *= a*n;
	return s;
	}
}

//chong ham
float TinhDT(float d, float r){
	return d * r;
}
float TinhDT(float r){
	return 3.14*r*r;
}

int main(){
	//su dung ham inline
	int a,b;
	cout <<"Nhap vao 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tich 2 so nguyen: "<< Tich(a,b) << endl;
	//su dung ham tinh tien
	int kw, m3;
	cout << "Nhap vao so kw, m3: ";
	cin >> kw >> m3;
	cout <<"Tien dien nuoc phai tra la: " << TinhTien(kw,m3)<<endl;
	//su dung ham mu
	cout << "Nhap vao so: ";
	cin >> a;
	cout <<"Ket qua: "<<Mu(a,3)<<endl;
	//su dung chong ham
	float d,r;
	cout << "Nhap vao d và r: ";
	cin >> d >> r;
	cout <<"DT HCN la: " <<TinhDT(d,r)<< endl;
	cout <<"DT HT la: "<<TinhDT(r) << endl;
}
