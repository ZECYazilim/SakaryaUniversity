/**
* @file main.cpp
* @description Main class'ý oluþturuldu ve iþlemleri yapýldý.
* @course II.Öðretim B Grubu (2B)
* @assignment 1.Ödev
* @date 07/11/2021
* @author Zekeriya Altunkaynak zekeriya.altunkaynak@ogr.sakarya.edu.tr
*/
#include<iostream>
#include "IkiYonluListe.hpp"
#include<string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include<locale.h>
using namespace std;
#pragma region Running function is declared for main()
void calistir()
{
	int lineNumber=0;
	IkiYonluListe* liste = new IkiYonluListe();
	string OkunanSatir = "";
	string islemVerisi = "";
	char IslemTuru;
	ifstream veriOku("Veri.txt");

	if (veriOku.is_open()) {

		while (getline(veriOku, OkunanSatir))
		{
			lineNumber++;
			islemVerisi = OkunanSatir.substr(2, OkunanSatir.length() - 3);
			IslemTuru = OkunanSatir[0]; //The first character of the Veri.txt will contain the transaction process, so i take the first character from the all lines.
			stringstream DataInfo(islemVerisi);
			string veriParcasi;
			string T[2];
			int i = 0;
			while (getline(DataInfo, veriParcasi, '#')) 
			{
				T[i] = veriParcasi;
				if(stoi(T[0])<0)
				{
					cout<<"\nHatali parametre girisi yapildi.\n"<<OkunanSatir<<" LINE NUMBER : "<<lineNumber<< " in Veri.txt\natanan index numarasi 0'dan kucuk olamaz."<<endl;
					exit(0);
				}
				i++;
			}
			if(IslemTuru=='s'||IslemTuru=='S')
			{
				liste->sil(stoi(T[0]));
			}
			else if(IslemTuru=='e'||IslemTuru=='E')
			{
				if(T[1]==""||T[0]=="")
				{
				cout<<"\nEksik veri parcasi ile karsilasildi.\n"<<OkunanSatir<<" LINE NUMBER : "<<lineNumber<< " in Veri.txt\natanan veri parcasi eksik veya hatali.\nOrnek Format : "<< 
				"E(INDISNo#VeriAdi)"<<endl;
				}
				else
				{
					liste->IndexleEkle(T[1], stoi(T[0]));
				}				
			}
			else
			{			
				cout<<"\nGecersiz islem tipi ile karsilasildi.\n"<<OkunanSatir<<" LINE NUMBER : "<<lineNumber<<" in Veri.txt\natanan '"<<IslemTuru<<"' islemi tanimli degil."<<endl;
				exit(0);
			}
		}
		veriOku.close();
	}
	else 
	{
		cout << "An error ocured while the file has been read." << endl;
	}
	delete liste;
}
#pragma endregion
int main()
{
	setlocale(LC_ALL, "Turkish");
	calistir();
}