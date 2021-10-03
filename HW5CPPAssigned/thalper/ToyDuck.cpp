#include <iostream>
#include "ToyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"
#include "LaysToyEggs.h"

ToyDuck::ToyDuck( ) {
   flyBehavior = new FlyNoWay( );
   quackBehavior = new MuteQuack( );
   laysEggs = new LaysToyEggs( );
}

void ToyDuck::display( ) {
   std::cout << "I’m a toy duck." << std::endl;
}