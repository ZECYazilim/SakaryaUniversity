/**
* @file IkiYonluListe.hpp
* @description Ýki yönlü liste metod gövdesi oluþturuldu ve iþlemleri yapýldý.
* @course II.Öðretim B Grubu (2B)
* @assignment 1.Ödev
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