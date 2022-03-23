


#ifndef NAGLOWKI_H
#define NAGLOWKI_H

#include <string>

class read
{
	std::string ID, seq, quality;

public:
	void set(const std::string& I, const std::string& V);


	std::string get(const std::string& I);

	void out();

	read() {
		ID = "1";
		seq = "2";
		quality = "3";
		std::cout << "konstruktor bezargumetowy zostal wywolany";
	}
	
	read(std::string ID, std::string seq) {
		this->ID = ID;
		this->seq = seq;
		std::cout << "konstruktor dwu argumetowy zostal wywolany";
	}
	read(std::string ID, std::string seq, std::string quality) {
		this->ID = ID;
		this->seq = seq;
		this->quality = quality;
		std::cout << "konstruktor wielo argumetowy zostal wywolany";
	}
	read(read& copy) {
		ID = copy.ID;
		seq = copy.seq;
		quality = copy.quality;
		std::cout<< "konstruktor kopiujacy zostal wywolany";
	}
	~read() {
		std::cout << "destruktor zostal wywolany";
	}



};




#endif