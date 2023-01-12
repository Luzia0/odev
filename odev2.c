#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[10],B[10],C[10],toplam,i,a,j;
	toplam=0;
	for(i=0;i<10;i++)
	{
		printf("dizinizin elemanini giriniz: ");
		scanf("%d",&A[i]);	
		toplam+=A[i];
	}
	a=toplam/10.0;
	printf("dizinizin ortalamasi: %d\n",a);
	
	for(i=0;i<10;i++)
	{
		if(A[i]>a)
		{
			for(j=0;j<10;j++)
				B[j]=A[i];	
		printf("%d ortalamadan buyuktur ve B dizisinin elemanidir\n",A[i]);
		}
	}
	for(i=0;i<10;i++)
	{
		if(A[i]<a)
		{
			for(j=0;j<10;j++)
			C[j]=A[i];
		printf("%d ortalamadan kucuktur ve C dizisinin elemanidir\n",A[i]);
		}
	}


	return 0;
}
