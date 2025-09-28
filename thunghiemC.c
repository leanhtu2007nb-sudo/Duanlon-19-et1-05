#include <stdio.h>
#include <math.h>

int main(){

	long long n;
	printf("Nhap so nguyen duong N: ");
	scanf("%lld",&n);

	if (n <= 0){
		do{
			printf ("Ban vua nhap so am, vui long nhap lai: ");
			scanf("%lld",&n);
		} while (n <=0);
	}







	
	int m = log10(n)+1;
	long long a[m];

	for (long long i = 0; i < m; i++){
		a[i] = n % 10;
		n = n / 10;
	}


	int tong = 0;
	for (long long i = 0; i < m; i++){
		tong += a[i];

	}

	printf("\nTong cac chu so la: %d", tong);
	return 0;



}
