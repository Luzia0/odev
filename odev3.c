#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[3],B[3],C[3],D[3],i,j,a;
	for(i=0;i<3;i++)
	{
		printf("dizi degerlerini giriniz: ");
		scanf("%d",&A[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("dizi degerlerini giriniz: ");
		scanf("%d",&B[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("dizi degerlerini giriniz: ");
		scanf("%d",&C[i]);
	}
	for(i=0;i<3;i++)
	{
		D[i]=A[i]+B[i]-C[i];
		printf("%d yeni diziniz\n",D[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(D[j]<=D[i])
			{
				a=D[i];
				D[i]=D[j];
				D[j]=a;
			}
		}
	}
	printf("buyukten kucuge siralama:  \n");
	
	for(i=0;i<3;i++)
		printf("%d\n", D[i]);
	
	
	
	return 0;
}
