#ifndef JEUX_H
#define JEUX_H
class Jeux
{
    public:
        virtual void start() = 0;
        virtual void exit() = 0;
        virtual void pause() = 0;
        virtual void restart() = 0;
};
#endif