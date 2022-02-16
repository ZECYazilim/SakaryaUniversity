/**
* @file DDugum.cpp
* @description DDugum class'� olu�turuldu ve i�lemleri yap�ld�.
* @course II.��retim B Grubu (2B)
* @assignment 1.�dev
* @date 07/11/2021
* @author Zekeriya Altunkaynak zekeriya.altunkaynak@ogr.sakarya.edu.tr
*/
#include "DDugum.hpp"
#include<iostream>
#include<string>

using namespace std;

DDugum::DDugum(string veri)
{
	this->veri = veri;
	this->sonraki = 0;
	this->onceki = 0;
}

DDugum::~DDugum()
{
	//cout<<veri<<" deleted succesfully.<<endl;
}