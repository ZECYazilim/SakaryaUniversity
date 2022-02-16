/**
* @file IkiYonluListe.hpp
* @description �ki y�nl� liste metod g�vdesi olu�turuldu ve i�lemleri yap�ld�.
* @course II.��retim B Grubu (2B)
* @assignment 1.�dev
* @date 07/11/2021
* @author Zekeriya Altunkaynak zekeriya.altunkaynak@ogr.sakarya.edu.tr
*/
#ifndef IkiYonluListe_HPP
#define IkiYonluListe_HPP
#include "DDugum.hpp"

using namespace std;

class IkiYonluListe
{
public:
	int boyut;
	IkiYonluListe();
	~IkiYonluListe();
	void yazdir();
	void IndexleEkle(string veri, int index);
	void ekle(string veri);
	void sil(int index);
	friend ostream& operator<<(ostream& screen, IkiYonluListe& list);

private:
	DDugum* ilk;
	DDugum* SonrakiniBul(int index);
	DDugum* sonDugumuGetir();
};

#endif