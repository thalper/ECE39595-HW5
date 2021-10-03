#include <iostream>
#include "PekinDuck.h"
#include "Quack.h"
#include "FliesPoorly.h"
#include "LaysEggsNotBroody.h"

PekinDuck::PekinDuck( ) {
   quackBehavior = new Quack( );
   flyBehavior = new FliesPoorly( );
   laysEggs = new LaysEggsNotBroody( );
}

void PekinDuck::display( ) {
   std::cout << "I’m a real pekin duck" << std::endl;
}
