#include "Flyweight.h"

int main(int argc, char** argv)
{
	FlyWeightFactory fwfac;
	fwfac.GetFlyweight("Hello");
	fwfac.GetFlyweight("World");
	Flyweight* fw=fwfac.GetFlyweight("Hello");
	fw->Operation("Ex");


	
	
	return(EXIT_SUCCESS);
}