/**
* @file IkiYonluListe.cpp
* @description Ýki yönlü liste class'ý oluþturuldu ve iþlemleri yapýldý.
* @course II.Öðretim B Grubu (2B)
* @assignment 1.Ödev
* @date 07/11/2021
* @author Zekeriya Altunkaynak zekeriya.altunkaynak@ogr.sakarya.edu.tr
*/
#include<iostream>
#include<iomanip>
#include<string>
#include "IkiYonluListe.hpp"
#include "DDugum.hpp"
//IKIYONLULISTE.CPP
using namespace std;

#pragma region Declaring Constructor and Destructor 
IkiYonluListe::IkiYonluListe()
{
	boyut = 0;
	ilk = 0;
}
IkiYonluListe::~IkiYonluListe()
{
	DDugum* gecici = ilk;
	while (gecici != 0)
	{
		DDugum* silinecekDugum = gecici;
		gecici = gecici->sonraki;
		delete silinecekDugum;
	}
}
#pragma endregion

#pragma region Adding a node with Index and Finding the next one
void IkiYonluListe::IndexleEkle(string veri, int index)
{
	DDugum* sonDugum = sonDugumuGetir();
	if (boyut == 0)
	{
		ilk = new DDugum(veri);
		boyut++;
	}
	else if (boyut != 0 && index >= boyut)
	{
		sonDugum->sonraki = new DDugum(veri);
		sonDugum->sonraki->onceki = sonDugum;
		boyut++;
	}
	else
	{
		int sayac = 0;
		DDugum* yeniDugum = new DDugum(sonDugum->veri);
		yeniDugum->onceki = sonDugum;
		sonDugum->sonraki = yeniDugum;
		while (!(boyut - sayac == index + 1))
		{
			sonDugum->veri = sonDugum->onceki->veri;
			sonDugum = sonDugum->onceki;

			sayac++;
		}
		sonDugum->veri = veri;
		boyut++;
	}
	yazdir();
}

DDugum* IkiYonluListe::SonrakiniBul(int index)
{
	DDugum* onceki = ilk;
	int i = 0;
	for (DDugum* itr = ilk;itr->sonraki != 0 && i != index + 1;i++, itr = itr->sonraki)
	{
		onceki = onceki->sonraki;
	}
	return onceki;
}

#pragma endregion

#pragma region Declaring Adding and Deleting Functions for Nodes
void IkiYonluListe::sil(int index)
{
	if (boyut == 1)
	{
		ilk = 0;
	}
	else if (index >= boyut - 1)
	{
		DDugum* sonDugum = sonDugumuGetir();
		sonDugum->onceki->sonraki = 0;

		delete sonDugum;
	}
	else
	{
		DDugum* sonrakiSilinecek = SonrakiniBul(index);

		while (sonrakiSilinecek->sonraki != 0)
		{
			sonrakiSilinecek->onceki->veri = sonrakiSilinecek->veri;
			sonrakiSilinecek = sonrakiSilinecek->sonraki;
		}
		sonrakiSilinecek->onceki->veri = sonrakiSilinecek->veri;
		sonrakiSilinecek->onceki->sonraki = 0;
		delete sonrakiSilinecek;
	}
	boyut--;
	yazdir();
}
void IkiYonluListe::ekle(string veri)
{
	IndexleEkle(veri, boyut - 1);
}
ostream& operator<<(ostream& screen, IkiYonluListe& list)
{
	DDugum* gecici = list.ilk;

	while (gecici->sonraki != 0)
	{
		screen << gecici->veri << "<-->";
		gecici = gecici->sonraki;
	}

	screen << endl << "***************************";

	return screen;
}
#pragma endregion

#pragma region Son Düðümü Getirme Fonksiyonu
DDugum* IkiYonluListe::sonDugumuGetir()
{
	if (ilk == 0)
	{
		return 0;
	}
	DDugum* gecici = ilk;
	while (gecici->sonraki != 0)
	{
		gecici = gecici->sonraki;
	}
	return gecici;
}
#pragma endregion

#pragma region Yazdirma Fonksiyonu Ve Islemleri
void IkiYonluListe::yazdir()
{
	DDugum* gecici = ilk;
	if (gecici == 0)
	{
		return;
	}
	while (gecici->sonraki != 0)
	{
		cout << gecici->veri << "<-->";
		gecici = gecici->sonraki;
	}
	cout << gecici->veri;
	cout << endl;
}
#pragma endregion

