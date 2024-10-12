#include<stdio.h>
#include<stdlib.h>
#define max 30
#define FOR(i,a,b) for (i=a; i<b; i++)
void WriteF(char *s);
void Create_Matrix();
int main(){
	char *s="DaySo.inp";
	WriteF(s);
	Create_Matrix();
	return 0;
}
void WriteF(char *s){
	FILE* f = fopen(s, "w");
	if(f== NULL)
		printf("khong mo duoc tap tin!");
	else{
		int i,n,m;
		printf("Nhap vao so luong phan tu cua day so: ");
		scanf("%d",&n);
		fprintf(f,"%d\n",n);
		for(i=1; i<=n; i++){
			printf("Nhap phan tu thu %d: ", i);
			scanf("%d", &m);
			fprintf(f, "%10d",m);
		}
		fclose(f);
	}
}
void Create_Matrix(){
	int i,j,n,m;
	char s[]=".\\Matran.inp";
	FILE* f= fopen(s, "w");
	if(f== NULL)
		printf("Err!");
	else{
		do{
			printf("Nhap kich thuoc ma tran n:");
			scanf("%d", &n);
		}while (n<2 || n>30);
		fprintf(f, "%d\n",n);
		FOR(i,0,n){
			FOR(j,0,n){
				m=rand()%1000;
				fprintf(f, "%6d",m);
			}
			fprintf(f,"\n");
		}
	}
	fclose(f);
}

