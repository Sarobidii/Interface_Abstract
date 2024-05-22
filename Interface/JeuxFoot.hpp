#include "Jeux.hpp"
class JeuxFoot:public Jeux 
{
    private:
        int nombreJoueur;
        double score;
        double ancienScore;
        double ancienNombreDeJoueur;
    public:
        JeuxFoot();
        ~JeuxFoot();
        void start();
        void exit();
        void pause();
        void restart();
        void nouvellePartie();
        void revenirAncienPartie();
};