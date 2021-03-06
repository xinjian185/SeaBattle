#include "ship.h"

ship::ship()
{
    x=0;
    y=0;
    os=horizontal;
    lenght=0;
}

ship::ship(int x, int y, orientation os, int lenght)
{
    this->x=x;
    this->y=y;
    this->os=os;
    this->lenght=lenght;
    for (int i=0; i<lenght; i++) {mass[i]=1;}
}

ship& ship::operator= (const ship &Ship)
{
    x=Ship.x;
    y=Ship.y;
    os=Ship.os;
    lenght=Ship.lenght;
    for (int i=0; i<lenght; i++)
    {
        mass[i]=Ship.mass[i];
    }
    return *this;
}

void ship::Reconstract(int x, int y, orientation os, int lenght)
{
    this->x=x;
    this->y=y;
    this->os=os;
    this->lenght=lenght;
    for (int i=0; i<lenght; i++) {mass[i]=1;}
}

void ship::HitShip(int x, int y)
{
    switch (os)
    {
    case horizontal:
    {
        if (this->y==y && x>=this->x && x<this->x+lenght)
        {
            mass[x-this->x]=0;
            int h=x-this->x;
        }
    }; break;
    case vertical:
    {
        if (this->x==x && y>=this->y && y<this->y+lenght)
        {
            mass[y-this->y]=0;
        }
    } break;
    }
}



bool ship::CheckDeath()              //проверка уничтожен ли корабль
{
    int g=0;
    for (int i=0; i<lenght; i++)
    {
        g=g+mass[i];
    }
    if (g) {return 0;}
    else return 1;
}

int ship::rx()
{
    return x;
}
int ship::ry()
{
    return y;
}
orientation ship::ros()
{
    return os;
}
int ship::rlenght()
{
    return lenght;
}
