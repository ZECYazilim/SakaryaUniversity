/**
* @file DDugum.cpp
* @description DDugum class'ý oluþturuldu ve iþlemleri yapýldý.
* @course II.Öðretim B Grubu (2B)
* @assignment 1.Ödev
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