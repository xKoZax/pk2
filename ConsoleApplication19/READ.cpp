#include <iostream>
#include <string>

#include "READ.h"


void read::set(const std::string& I,const std::string& V) {
	if (I == "I")
	{
		ID = V;
	}
	else if (I == "S")
	{
		seq = V;
	}
	else if (I == "Q")
	{
		quality = V;
	}
}

std::string read::get(const std::string& I) {
	if (I == "I")
	{
		return ID;
	}
	else if (I == "S")
	{
		return seq;
	}
	else if (I == "Q")
	{
		return quality;
	}
	return "";
}
void read::out() {
	std::cout << "ID:" << ID << std::endl << "SEQ:" << seq << std::endl << "QUALITY:" << quality;
}