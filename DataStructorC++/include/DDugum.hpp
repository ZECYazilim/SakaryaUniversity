/**
* @file DDugum.hpp
* @description DDugum class'ýnýn metotlarý oluþturuldu ve iþlemleri yapýldý.
* @course II.Öðretim B Grubu (2B)
* @assignment 1.Ödev
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
