#include "Vehicule.hpp"
#include <string>
using namespace std;

class Auto:public Vehicule 
{
	private:
		int nombreDePortes;
		int nombreDePlaces;
		double puissance;
	public:
		Auto();
		~Auto();
		void conduire();
};


