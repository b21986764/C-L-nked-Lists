networkmap: main.o Apartment.o ApartmentList.o ReadFile.o
	g++ main.o Apartment.o ApartmentList.o ReadFile.o -o networkmap
main.o: main.cpp
	g++ -c main.cpp
Apartment.o: Apartment.cpp Apartment.h
	g++ -c FindWrite.cpp
ApartmentList.o: ApartmentList.cpp ApartmentList.h
	g++ -c ApartmentList.cpp
ReadFile.o: ReadFile.cpp ReadFile.h
	g++ -c ReadFile.cpp
