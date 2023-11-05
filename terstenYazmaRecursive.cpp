#include<stdio.h>
#include <string.h>
 
int uzunlukHesaplama(char cumle[])
{	 	
    int sayac=0;
    while(cumle[sayac]!='\0')
    {
    	sayac++;
	}
	return sayac;
}

char terstenYazdirma(char metin[], int lenght)
{
	int uzunluk2=lenght;
	
	printf("%c",metin[lenght]);
	lenght--;
	if(lenght >= 0)
	 return terstenYazdirma(metin,lenght);

}  
  
int main()
{
	char metin[100];
	printf("Metni Girin : ");
	gets(metin);	
	printf("%s",terstenYazdirma(metin,uzunlukHesaplama(metin)));


   
}