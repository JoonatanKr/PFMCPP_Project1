#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: airPlane
//  action 1: turns around
airPlane.turnsAround();

//  action 2: crashes and burns
airPlane.crashAndBurn();

//  action 3: executes a nose dive
airPlane.executeNoseDive();

//  2)
//  Noun: saberTooth
//  action 1: rolls around
saberTooth.rollAround();

//  action 2: hides in bushes
saberTooth.hideInBush();

//  action 3: surprise attacks prey
saberTooth.surpriseAttack();
 
//  3)
//  Noun: greenParrot
//  action 1: mimics human
greenParrot.mimicHuman();

//  action 2: takes flight
greenParrot.takeFlight();

//  action 3: screams Terribly
greemParrot.screamTerribly();
 
//  4)
//  Noun: policeOfficer
//  action 1: chases criminals
policeOfficer.chaseCriminal();

//  action 2: tackles criminals
policeOfficer.tackleCriminal();

//  action 3: sounds alarm
policeOfficer.soundAlarm();
 
//  5)
//  Noun: footSoldier
//  action 1: takes cover
footSoldier.takeCover();

//  action 2: shoots guns
footSoldier.shootGun();

//  action 3: throws grenades
footSoldier.throwGrenade();

//  6)
//  Noun: killerBee
//  action 1: sting the enemy
killerBee.stingEnemy();

//  action 2: takes flight
killerBee.takeFlight();

//  action 3: scares everyone and everything
killerBee.scareEveryoneAndEverything();
 
//  7)
//  Noun: heatSink
//  action 1: heats up
heatSink.heatUp();

//  action 2: exchanges heat
heatSink.exchangeHeat();

//  action 3: protects device from over heating
heatSink.protectDeviceFromHeat();
 
//  8)
//  Noun: goldFish
//  action 1: avoids predators
goldFish.avoidPredator();

//  action 2: eats plankton
goldFish.eatPlankton();

//  action 3: eats vegatation
goldFish.eatVegetation();
 
//  9)
//  Noun: bankRobber
//  action 1: robs banks
bankRobber.robBank();

//  action 2: avoids the police
bankRobber.avoidPolice();

//  action 3: steals money
bankRobber.stealMoney();
 
//  10)
//  Noun: guitarTeacher
//  action 1: teaches guitar
guitarTeacher.teachGuitar();

//  action 2: plays guitar
guitarTeacher.playGuitar();

//  action 3: gives homework
guitarTeacher.giveHomework();
 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
