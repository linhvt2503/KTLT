#include<stdio.h>
#define N 50
void DocDS(char *s, int a[], int &n);
void XuatDS(int a[], int n);
int main(){
	char *s= "DaySo.inp";
	int a[N],n;
	DocDS(s,a,n);
	XuatDS(a,n);
}
void DocDS(char *s,int a[], int &n){
	FILE* f=fopen(s, "r");
	if(f== NULL)
		printf("khong mo duoc tap tin");
	else{
		int i;
		fscanf(f, "%d", &n);
		for(int i=0; i<n; i++)
			fscanf(f, "%d",&a[i]);
		fclose(f);
	}
}
void XuatMT(int a[],int n){
	int i;
	printf("\n so hang, cot cua MT:%d\n", n);
	for(int i=0; i<n; i++){
		printf("%8d", a[i]);
	}
	printf("\n");

}
