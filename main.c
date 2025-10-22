#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

                   //SHARPE ORANI HESAPLAMA UYGULAMASI   

int main(int argc, char *argv[]) {
	double yatirim_getirisi;
	double Risksiz_faiz_orani;
	double standart_sapma;
	
	double sharpe_orani;

//Kullanicidan verileri alma

    printf("Lutfen Yatirim getirisini giriniz:%%");
    scanf("%lf", &yatirim_getirisi);
    
    printf("Lutfen Risksiz faiz oranini giriniz:%%");
    scanf("%lf", &Risksiz_faiz_orani);
    
    printf("Lutfen standart sapma oranini giriniz:%%");
    scanf("%lf", &standart_sapma);
    
//Sharpe oraninin hesaplanmasi 

   sharpe_orani = (yatirim_getirisi - Risksiz_faiz_orani)/standart_sapma;
   
//Sonucun ekrana yazdirilmasi
   
   printf("SHARPE ORANI =%% %lf\n", sharpe_orani);
   
//Sharpe oraninin degerlendirilmesi

   if(sharpe_orani>3){
   	printf("SHARPE ORANI MUKEMMEL");
   }
   else if(sharpe_orani>2){
   	printf("SHARPE ORANI COK IYI");
   }
   else if(sharpe_orani>1){
   	printf("SHARPE ORANI IYI");
   }
   else{
   	printf("SHARPE ORANI DUSUK");
   }

	

    
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
