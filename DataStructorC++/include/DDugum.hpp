/**
* @file DDugum.hpp
* @description DDugum class'�n�n metotlar� olu�turuldu ve i�lemleri yap�ld�.
* @course II.��retim B Grubu (2B)
* @assignment 1.�dev
* @date 07/11/2021
* @author Zekeriya Altunkaynak zekeriya.altunkaynak@ogr.sakarya.edu.tr
*/
#ifndef DDugum_hpp
#define DDugum_hpp
#include<string>

using namespace std;

class DDugum {
public:
	DDugum(string veri);
	~DDugum();

	string veri;
	DDugum* onceki;
	DDugum* sonraki;
};
#endif
