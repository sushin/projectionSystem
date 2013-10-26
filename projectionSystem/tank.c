#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

#define _GRAVITY_ 9.8

int _angle;
int _timeFrame=0;

//Initializing the Graphics
void initGraphics(){
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
}

//Get the projectile X values
int getProjectileX(float timeIndex, float theta, float velocity){
    return ((velocity*cos(theta*_PI_/180))*timeIndex);
}

//Get the projectile Y values
int getProjectileY(float timeIndex, float theta, float velocity){
  return (velocity*sin(theta*_PI_/180))*timeIndex-0.5*_GRAVITY_*(timeIndex*timeIndex);
}

//Get the required input
void getInput(){
   printf("Enter the angle of projection");
   scanf("%d",&_angle);
}


//Intro Graphics
void graphics(){
 printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-PROJECTILE MOTION-_-_-_-_-_-_-_-_-_-_-_-\n\n");
	 printf("  _______    __________    ___         ________\n");
	 printf(" |    ___|  |   ____   |  |   |       |    ____|\n");
	 printf(" |   |      |  |____|  |  |   |       |   |\n");
	 printf(" |   |___   |  ------  |  |   |____   |   |____   __\n");
	 printf(" |_______|  |__|    |__|  |________|  |________| |__|\n");
	 printf(" __________________________________________\n");
	 printf("|******************************************|\n");
	 printf("|------------------------------------------|\n");
	 printf("|       Created By Techno Graphics         |\n");
	 printf("|------------------------------------------|\n");
	 printf("|                                          |\n");
	 printf("|       Projectile Simulation in C         |\n");
	 printf("|             Demo Project                 |\n");
	 printf("|                                          |\n");
	 printf("|                                          |\n");
	 printf("|__________________________________________|\n");
}


//Main method
void main(){
	 initGraphics();
	 graphics();
	 getInput();
	 while(kbhit){
		 for(_timeFrame = 0;_timeFrame<50;_timeFrame++){
			 putpixel(getProjectileX(_timeFrame,_angle,_velocity),getProjectileY(_timeIndex,_angle,_velocity),RED);
		 }
	 }
}
