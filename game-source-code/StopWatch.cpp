#include "StopWatch.h"
#include <ctime>
#include <iostream>
using namespace std;

StopWatch::StopWatch() : ellapsedtime{0.0},
alienFiringInt{0.0}{
    
}
double StopWatch::getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}

 bool StopWatch::timerForMovement(){
     if(getProcessTime() - ellapsedtime >= 1){
         ellapsedtime = getProcessTime();
         return true;
     }
     return false;
 }
 
 bool StopWatch::alienFiringInterval(){
     if(getProcessTime() - alienFiringInt >=10){
         alienFiringInt = getProcessTime();
         return true;
     }
     return false;
 }