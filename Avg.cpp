#include <stdlib.h>
#include <stdio.h>

int main(int n, char* a[]){
	if(n >= 2){
		float s = 0;
		for(int i = 1; i < n; i++)
			s += atof(a[i]);
		printf("TBC: %.3f",s/(n-1));
	}
}
