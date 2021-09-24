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
//  Noun: plane
//  action 1: flies
plane.fly();

//  action 2: crashes
plane.crash();

//  action 3: takes off
plane.takeOff();

//  2)
//  Noun: cat
//  action 1: yawns
cat.yawn();

//  action 2: jumps
cat.jump();

//  action 3: runs
cat.run();
 
//  3)
//  Noun: bird
//  action 1: sings
bird.sing();

//  action 2: flaps its wings
bird.flapWings();

//  action 3: dies
bird.die();
 
//  4)
//  Noun: firetruck
//  action 1: puts out fire
fireTruck.putOutFire();

//  action 2: extends laddders
fireTruck.extendLadder();

//  action 3: sounds alarm
fireTruck.soundAlarm();
 
//  5)
//  Noun: soldier
//  action 1: crawls
soldier.crawl();

//  action 2: shoots
soldier.shoot();

//  action 3: hides
soldier.hide();

//  6)
//  Noun: wasp
//  action 1: stings
wasp.sting();

//  action 2: flies
wasp.fly();

//  action 3: scares everyone and everything
wasp.scareEveryoneAndEverything();
 
//  7)
//  Noun: oven
//  action 1: heats up
oven.heatup();

//  action 2: consumes energy
oven.consumeEnergy();

//  action 3: bakes food
oven.bakeFood();
 
//  8)
//  Noun: fish
//  action 1: swims
fish.swim();

//  action 2: eats
fish.eat();

//  action 3: shits
fish.shit();
 
//  9)
//  Noun: burglar
//  action 1: steals
burglar.steal();

//  action 2: runs
burglar.run();

//  action 3: hides
burglar.hide();
 
//  10)
//  Noun: broker
//  action 1: buys
broker.buy();

//  action 2: sells
broker.sell();

//  action 3: profits
broker.profit();
 


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
