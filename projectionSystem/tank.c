#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
//#include <fragment>


//methods to initialize the graphics
void initGraphics(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
}

//methods to obtain x and y co-ordinate
int getProjectileX(float timeIndex, float theta, float velocity){
 return ((velocity*cos(theta*_PI_/180))*timeIndex);
}

int getProjectileY(float timeIndex, float theta, float velocity){
  return (velocity*sin(theta*_PI_/180))*timeIndex-0.5*_GRAVITY_*(timeIndex*timeIndex);
}

void startGame(){
   while(!kbhit()){
   
   
   }
   
}

//program entry point
void main(){
   initGraphics();
   



}