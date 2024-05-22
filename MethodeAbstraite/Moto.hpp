#include "Vehicule.hpp"
class Moto: public Vehicule 
{
	private:
		string couleurCasque;
	public:
		Moto();
		~Moto();
		void conduire();
		void afficher();
};	
