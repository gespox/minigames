// Mehmet Sait Okan --> github.com/gespox
//Puanlama sistemi eklenecek
//Pacman ve başka oyunlar dahil edilecek

#include"stdafx.h"
#include<conio.h>
#include <stdlib.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
void sayitahmin();
int main()
{ 	
	char secim;
	bool cikis = true;
	do {
		cout << "Sayi Tahmin Oyunu Icin --> 1 "
			<< "\nPacman Oyunu Icin --> 2 "
			<<"\nEkrani Temizlemek Icin --> 3 "
			<<"\nCikmak Icin --> 4 "
			<<"\nYapmak Istediginiz Islem: "
			;

		cin >> secim;
		switch (secim) {
		case '1': {
			sayitahmin();
			break;
		}
		case '2': {
			cout << "\nYakinda!!\n";
			break;
		}
		case '3': {
			system("cls");
			break;
		}
		case '4': {
			cikis = false;
			break;
		}
		default:
			break;


		}
	} while (cikis);
	
    return 0;
}

void sayitahmin() {
	srand(time(NULL));
	int randomsayi = rand() % 100 + 1;
	int tahminsayisi = 0;
	int tahmin;

	cout << "\n\t---Sayi Tahmin Oyununa Hosgeldiniz---\n";
	do {
		cout << "Yeni Bir Sayi Girin: ";
		cin >> tahmin;
		tahminsayisi++;
		if (tahmin == randomsayi) {
			cout << "TEBRIKLER DOGRU SAYIYI BULDUNUZ!";
			break;
		}
		else if (tahmin < randomsayi && tahminsayisi<5)
			cout << "Girdiginiz Sayi Kucuk, ";
		else if (tahmin > randomsayi && tahminsayisi<5)
			cout << "Girdiginiz Sayi Buyuk, ";
		if (tahminsayisi == 5)
			cout << "Bilemediniz! Dogru Cevap:" << randomsayi;
	} while (tahminsayisi < 5);	
	cout << "\nOyun Bitti\n";
}