#include "Jeux.hpp"
#include "JeuxStrategique.hpp"
#include <iostream>
using namespace std;
JeuxStrategique::JeuxStrategique()
{
}
JeuxStrategique::~JeuxStrategique()
{
}
void JeuxStrategique::start() {
    cout << "Bienvenue dans le monde stratégique !!" << endl;
  }

  void JeuxStrategique::exit() {
    cout << "Merci d'avoir joué à ce jeu de stratégie !" << endl;
  }

  void JeuxStrategique::pause() {
    cout << "Le jeu est en pause. Appuyez sur une touche pour continuer..." << endl;
    cin.ignore(); 
  }

  void JeuxStrategique::restart() {
    cout << "Nouvelle partie !!" << endl;
  }