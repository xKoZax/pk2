

#include <iostream>



#include "READ.h"



int main()
{
	read p1;
	p1.set("I", "123");
	p1.set("S", "234");
	p1.set("Q", "345");
	std::cout << p1.get("I")<<std::endl;
	p1.out();
	std::cout << std::endl;
	read *p2 = new read();
	std::cout << std::endl;
	read *p3 = new read("33", "44");
	std::cout << std::endl;
	read *p4 = new read("33", "44","55");
	std::cout << std::endl;
	read p5(*p4);
	return 0;
}


