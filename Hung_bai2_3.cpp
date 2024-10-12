#include<stdio.h>
#define N 50
void DocMT(char *s, int A[][N], int &n);
float TinhTBC(int A[][N], int n);
int TimLN(int A[][N], int n);
void XuatMT(int A[][N], int n);
int main(){
	char *s= "MaTran.inp";
	int A[N][N],n;
	DocMT(s,A,n);
	XuatMT(A,n);
}
void DocMT(char *s,int A[][N], int &n){
	FILE* f=fopen(s, "r");
	if(f== NULL)
		printf("khong mo duoc tap tin");
	else{
		int i;
		fscanf(f, "%d", &n);
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			fscanf(f, "%d",&A[i][j]);
		fclose(f);
	}
}
void XuatMT(int A[][N],int n){
	int i;
	printf("\n so hang, cot cua MT:%d\n", n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%8d", A[i][j]);
		}
		printf("\n");
	}
}
float TinhTBC(int A[][N], int n){
	float s=0;
	int i=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		s+=A[i][j];
		return s/n;
}
int TimLN(int A[][N], int n){
	int i,j, max=A[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(max<A[i][j])
				max=A[i][j];
	return max;
}
void GhiFile(int A[][N], int n){
	FILE* f=fopen("KetQua.out", "w");
	if(f==NULL)
		printf("Err!");
	else{
		fprintf(f,"TBC la %.3f\n",TinhTBC(A,n));
		fprintf(f,"So lon nhat %d", TimLN(A,n));
	}
}
