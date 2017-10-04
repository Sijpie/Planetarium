#pragma once
#include "ofMain.h"
#include "ofxGui.h"

class Planets
{
public:
	Planets();
	
	void newPlanet();//(float nxspeed, float nyspeed, float nzspeed, ofColor ncolor, float nradius);
	void updatePlanet();
	void drawPlanet();

	float xpos;
	float ypos;
	float zpos;
	float xspeed;
	float yspeed;
	float zspeed;
	ofColor color;
	float radius;
	float rotatespeed;

	float rotation = 0.0;
	
};

