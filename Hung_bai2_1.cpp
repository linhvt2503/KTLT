#include<stdio.h>
#define max 50
//bai2.1
void NhapDS(int a[], int &n);
int dem(int a[], int n);
bool KTGiam(int a[], int n);
int main(){
	int a[max], n;
	NhapDS(a,n);
	printf("dem so luong phan tu x:%d", dem(a,n));
	if(KTGiam(a,n))
		printf("\nday so theo thu tu giam dan");
	else
		printf("\nday so khong theo thu tu giam dan!");
}
//nhap day so
void NhapDS(int a[], int &n){
	do{
		printf("Nhap so phan tu cua day so: ");
		scanf("%d", &n);
	}while(n<=3 || n>=50);
	int i;
	for(int i=0; i<n; i++){
		printf("a[%d]: ",i );
		scanf("%d", &a[i]);
	}
		
}
//dem so luong phan tu x trong day so
int dem(int a[], int n){
	int linhcanh=-9999999;
	a[n]=linhcanh;
	int i=0, x,dem=0;
	printf("nhap gia tri can dem so luong: ");
	scanf("%d", &x);
	while(a[i]!=linhcanh){
		if(a[i]==x)
			dem++;
		i++;
	}
	return dem;
}
bool KTGiam(int a[], int n){
	bool flag=true;
	for(int i=0; i<n-1; i++)
		if(a[i+1]>a[i]){
			flag=false;
			break;
		}
	return flag;
}
