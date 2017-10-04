#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Planets.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		
		ofxPanel gui;


		ofParameter<bool> drawGrid;
		ofParameter<bool> useLight;

	
		Planets planet1;
		Planets planet2;
		Planets planet3;

		ofLight light;
		ofEasyCam cam;

		
};
