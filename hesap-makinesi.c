#include <stdio.h> // printf, scanf gibi giriþ-çýkýþ fonksiyonlarý için
#include <string.h> // string iþlemleri için
#include <conio.h> // getch gibi konsol fonksiyonlarý için
#include <stdlib.h> // exit, system gibi fonksiyonlar için
#include <math.h> // sqrt, pow gibi matematiksel iþlemler için
#include <windows.h> // Sleep() fonskiyonu için

int main() {
	
	// TANIMLAMA
	int num1, num2, num3, sumNumbers, multipleNumbers, subtractNumbers, remainder;
	float avgNumbers, quotient;
	char again = 'E';
	
	// VERILERIN ALINMASI
	while(again == 'E' || again == 'e') {
	        
	        system("cls");
	        
			printf("Konsol tabanli basit hesap makinesine hos geldiniz!\n");
			int choice;
			printf("Yapmak istediginiz islemi belirtiniz.\n");
			printf("----------\n1. Toplama\n2. Cikarma\n3. Carpma\n4. Bolme\n5. Ortalama Hesaplama\n6. Karekok Hesaplama\n7. Kuvvet (Us) Alma\n8. Cikis\n----------");
			printf("\nSecim yapin: ");
			scanf("%d", &choice);
			
			if (choice == 1) {
				int number, sumNumbers = 0;
				char cont = 'E';
				
			do {
				printf("Bir sayi girin: ");
				scanf("%d", &number);
				sumNumbers += number;
				
				printf("Baska bir sayi eklemek istiyor musunuz? (E/H): ");
				scanf(" %c", &cont);
			} while(cont == 'E' || cont == 'e');
			
			printf("> Toplama isleminin sonucu = %d", sumNumbers);
			}
			else if (choice == 2) {
				printf("Ilk sayiyi girin: ");
				scanf("%d", &num1);
				
				printf("Ikinci sayiyi girin: ");
				scanf("%d", &num2);
				
				subtractNumbers = num1-num2;
				printf("> Cikarma isleminin sonucu = %d", subtractNumbers);
			}
			else if (choice == 3) {
				int number;
				int multipleNumbers = 1;
				int zeroCount = 0;
				char cont = 'E';
				
			do {
				printf("Bir sayi girin: ");
				scanf("%d", &number);
				
				if (number == 0) {
					zeroCount++;
				}
				
				multipleNumbers *= number;
				
				printf("Baska bir sayi eklemek istiyor musunuz? (E/H): ");
				scanf(" %c", &cont);
			} while(cont == 'E' || cont == 'e');
			
			if (zeroCount >= 2) {
				printf("> Carpma isleminin sonucu belirsizdir.");
			} else {
				printf("> Carpma isleminin sonucu = %d", multipleNumbers);
			}
			}
			else if (choice == 4) {
				int dividend, divisor;
				
				printf("Boluneni girin: ");
				scanf("%d", &dividend);
				
				printf("Boleni girin: ");
				scanf("%d", &divisor);
				
				if (dividend == 0 && divisor == 0) {
					printf("> Bu islemin sonucu belirsi zdir.\n");
				}
				else if (divisor == 0) {
					printf("> Bu islemin sonucu tanimsizdir.\n");
				}
				else {
				quotient = (float)dividend/divisor;
				printf("> Bolme isleminin sonucu = %.2f", quotient);
				}
			}
			else if (choice == 5) {
				int number, sumNumbers = 0, count = 0;
				float avgNumbers;
				char cont = 'E';
				
			do {
				printf("Bir sayi girin: ");
				scanf("%d", &number);
				sumNumbers += number;
				count++;
				
				printf("Baska bir sayi eklemek istiyor musunuz? (E/H): ");
				scanf(" %c", &cont);
			} while(cont == 'E' || cont == 'e');
			
			avgNumbers = sumNumbers / (float)count;
			printf("> Girdiginiz sayilarin ortalamasi = %.2f\n", avgNumbers);
			}
			else if (choice == 6) {
				double numSR, resultSR;
				
				printf("Karekokunu hesaplamak istediginiz sayiyi girin: ");
				scanf("%lf", &numSR);
				
				if(numSR < 0) {
					printf("Negatif sayilarin karekoku hesaplanamaz!\n");
				}
				
				resultSR = sqrt(numSR);
				printf("> Girdiginiz sayinin karekoku = %.2f", resultSR);
				
			}
			else if (choice == 7) {
				double base, exponent, resultEXP;
				
				printf("Taban sayiyi girin: ");
				scanf("%lf", &base);
				
				printf("Kuvveti girin: ");
				scanf("%lf", &exponent);
				
				resultEXP = pow(base, exponent);
				
				printf("> Kuvvet alma isleminin sonucu = %.2f", resultEXP);
				
			}
			else if (choice == 8) {
				printf("Kullandiginiz icin tesekkurler, program kapatiliyor.\n");
				Sleep(3000);
				break;
			}
			else {
				printf("Gecersiz secim yaptiniz.");
			}
			
			printf("\nBaska bir islem yapmak istiyor musunuz? (E/H): ");
			scanf(" %c", &again);
			if (again == 'H' || again == 'h') {
				printf("Kullandiginiz icin tesekkurler, program kapatiliyor.\n");
				Sleep(3000);
                break;
			}
	}

    return 0;
}

