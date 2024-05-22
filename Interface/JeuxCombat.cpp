#include "Jeux.hpp"
#include "JeuxCombat.hpp"
#include <iostream>
using namespace std;
JeuxCombat::JeuxCombat()
{
}
JeuxCombat::~JeuxCombat()
{
}
void JeuxCombat::start() {
    cout << "Début du combat !!" << endl;
  }

  void JeuxCombat::exit() {
    cout << "Fin du combat. Merci d'avoir joué !" << endl;
  }

  void JeuxCombat::pause() {
    cout << "Le combat est en pause. Appuyez sur une touche pour continuer..." << endl;
    cin.ignore(); 
  }

  void JeuxCombat::restart() {
    cout << "Nouveau combat !!" << endl;
  }