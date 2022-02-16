all:compile link execute

compile:
	g++ -c -I "./include" ./src/DDugum.cpp -o ./lib/DDugum.o
	g++ -c -I "./include" ./src/IkiYonluListe.cpp -o ./lib/IkiYonluListe.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	
link:
	g++ ./lib/IkiYonluListe.o ./lib/DDugum.o ./lib/main.o -o ./bin/program
	
execute: 
	./bin/program