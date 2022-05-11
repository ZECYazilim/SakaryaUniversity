package com.company;

public class CihazBilgileriFactory {
	
	public CihazBilgileri FactoryMethod() {
		Model model = new Model(2022,"Turkiye");
		CihazBilgileri cihaz = new CihazBilgileri("Turkuaz",475,model);
		return cihaz;
		
	}
}
