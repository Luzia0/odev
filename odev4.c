#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int A[3],i;
	float C[3],B[3],k;
	for(i=0;i<3;i++)
	{
		printf("dizinizin elemanlarini giriniiz: ");
		scanf("%d",&A[i]);	
	}
	for(i=0;i<3;i++)
	{
		B[i]=A[i]*A[i];
		printf("Yeni dizinizin degeri: %.2f\n",B[i]);
	}
	for(i=0;i<3;i++)
	{
		C[i]=sqrt(A[i]);
		printf("yeni dizinizin degeri: %.2f\n",C[i]);
	}
	for(i=0;i<3;i++)
	{
		k=B[i]*C[i];
		printf("carpiminin degeri: %.2f'dir'\n",k);
	}
	return 0;
}
