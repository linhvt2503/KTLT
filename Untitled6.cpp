#include <iostream>
#include <stdlib.h>
int main(int c, char* a[]){
	//a.
	if(c == 4){
		int n = atoi(a[1]);
		char c = *a[2];
		int b = atoi(a[3]);
		switch(c){
			case '+': printf ("%d + %d = %d",n,b,n+b); break;
			case '-': printf ("%d - %d = %d",n,b,n-b); break;
			case '*': printf ("%d * %d = %d",n,b,n*b); break;
			case '/': 	if(b != 0)
							printf ("%d / %d = %d",n,b,n/b);
						else
							printf ("Loi chia 0!");
		}
	}
	else
		printf("Khong hop le");
			
	
}
