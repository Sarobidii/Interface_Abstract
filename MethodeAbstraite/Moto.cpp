#include <iostream>
#include "Vehicule.hpp"
#include "Moto.hpp"

using namespace std;
Moto::Moto()
{
}
Moto::~Moto()
{
}
void Moto::afficher()
{
	Vehicule::setNombreDeRoues(2);
	cout << "Nombre de roues : " << Vehicule::getNombreDeRoues() << endl;
	cout << "Prix : " << Vehicule::getPrix() << endl;
	cout << "Nombre de roues : " << Vehicule::getMarque() << endl;
	cout << "Couleur : " << Vehicule::getCouleur() << endl;
}
void Moto::conduire()
{	
	cout << "Pour démarrer la moto : " << endl;
	cout << "1-Insérez la clé et mettez le contact." << endl;
	cout << "2-Tirez sur le levier d'embrayage et passez au point mort." << endl;
	cout << "3-Appuyez sur le bouton de démarrage ou donnez un coup de pied au démarreur (selon la moto)." << endl;
	cout << "4-Relâchez lentement le levier d'embrayage tout en appliquant un peu d'accélérateur pour faire avancer la moto." << endl;
	cout << "Pour changer de vitesse : " << endl;
	cout << "1-Utilisez le levier de vitesses gauche pour passer les vitesses." << endl;
	cout << "2-Montez les vitesses en relâchant légèrement l'accélérateur, en montant le levier et en enroulant l'accélérateur." << endl;
	cout << "3-Rétrogradez en appuyant sur le levier de vitesses vers le bas, en coupant l'accélérateur et en relâchant l'embrayage progressivement." << endl;
	cout << "Pour freiner : " << endl;
	cout << "1-Utilisez les deux freins simultanément, en appliquant une pression progressive sur les leviers." << endl;
	cout << "2-Le frein avant est plus puissant, mais utilisez-le avec précaution pour éviter de perdre le contrôle." << endl;
	cout << "3-Le frein arrière aide à stabiliser la moto lors du freinage et dans les virages." << endl;
	cout << "Pour le virage : " << endl;
	cout << "1-Réduisez votre vitesse avant d'entrer dans un virage." << endl;
	cout << "2-Inclinez la moto dans le sens du virage en déplaçant votre poids et en tournant le guidon." << endl;
	cout << "3-Maintenez une vitesse constante et évitez les changements brusques d'accélération ou de freinage dans le virage." << endl;
	cout << "Pour arrêter : " << endl;
	cout << "Rétrogradez jusqu'à la première vitesse." << endl;
	cout << "Appliquez les deux freins simultanément pour ralentir." << endl;
	cout << "Une fois la moto immobile, engagez le point mort et coupez le contact." << endl;
}
