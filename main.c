#include <stdio.h>
#include <stdlib.h>

//celcius to fah:(c*9/5)+32=F
// fah to celcius:(F-32)*5/9=C

int main() {

 	float fh,cl;
	char ch;
	printf("\n\n fahrenheitden celciusa cevirmek icin c ye basiniz.");
	printf("\n\n celciustan fahrenheita cevirmek icin f ye basiniz.");
	scanf("%c",&ch);
	if ((ch=='c')|| (ch=='C')){
		printf("\n fahrenheit degerini giriniz:");
		scanf("%f",&fh);
		cl=((fh-32)/1.8);
		printf("\n\n celciustaki sıcaklık: %.2f\n\n",cl);
	}
	else if((ch=='f')||(ch=='F')){
		printf("\n celciustaki degerini giriniz:");
		scanf("%f",&cl);
		fh=((cl*1.8)+32);
		printf("\n\n fahrenheittaki sıcaklık: %.2f\n\n,fh");
		
	}
	else{
		printf("\n\n Geçersiz seçim!");
	} 

	
return 0;
}