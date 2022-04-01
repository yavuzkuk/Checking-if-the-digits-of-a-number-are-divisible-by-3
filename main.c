#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int numara,toplam,i,j,temp,bolu=0,kalu=0,a;
	
	printf("Bir deger girin. ");
	scanf("%d",&numara);
	
	while(numara>0)
	{
		toplam=toplam+(numara%10);
		numara=numara/10;
	}
	
	printf("Rakamlarin toplami %d\n",toplam);
	
	int dizi1[toplam],bol[bolu],kal[kalu],k=0,h=0,max=bol[0];
	printf("Dizi icin deger girin.\n");
	//yeni dizi için deger alýnýyo
	for(i=0;i<toplam;i++)
	{
		printf("%d. icin deger girin.",i+1);
		scanf("%d",&dizi1[i]);
	}
	//sayýlarý sýrayla dizmek lazým
	for(i=0;i<toplam;i++)
	{
		if(dizi1[i]%3==0)
		{
			bol[k]=dizi1[i];
			k++;
		}
		
		else if(dizi1[i]%3!=0)
		{
			kal[h]=dizi1[i];
			h++;
		}
	}
	
	printf("\n*******\n");
	
	printf("3'e bolunenler ");
	
	for(i=0;i<k;i++)
	{
		printf("%d ",bol[i]);
	}
	
	printf("\n");
	printf("3'e bolunmeyenler ");
	
	for(i=0;i<h;i++)
	{
		printf("%d ",kal[i]);
	}

	

	return 0;
}
