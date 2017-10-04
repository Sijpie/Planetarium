#include "Planets.h"



Planets::Planets()
{
}


void Planets::newPlanet()//(float nxspeed, float nyspeed, float nzspeed, ofColor ncolor, float nradius)
{
	color.set(ofColor::white);//(ncolor);
	radius = (50);//nradius;

	xpos = 0;
	ypos = 0;
	zpos = 0;

}

void Planets::updatePlanet(){

	rotation++;

}

void Planets::drawPlanet() {
	ofSetColor(color);
	ofRotate(rotation * rotatespeed);

	ofSphere(xpos, ypos, zpos, radius);

	//ofSphere(0, 0, 0, 50);

}