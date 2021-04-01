#include "Game.hpp"

#include <iostream>


using namespace std;

Game::Game()
{
    this->theTowers[3];
    theTowers[0] = new Tower();
    theTowers[1] = new Tower();
    theTowers[2] = new Tower();

    Disk* d1 = new Disk(1);
    Disk* d2 = new Disk(2);
    Disk* d3 = new Disk(3);

    theTowers[0]->push(d3);
    theTowers[0]->push(d2);
    theTowers[0]->push(d1);
}

void Game::display()
{
    cout << "Tower 1" << endl;
    this->theTowers[0]->display();
    cout << "Tower 2" << endl;
    this->theTowers[1]->display();
    cout << "Tower 3" << endl;
    this->theTowers[2]->display();

}