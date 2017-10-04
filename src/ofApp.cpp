#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	gui.setup();
	gui.add(drawGrid.set("Grid", false));
	gui.add(useLight.set("Light", false));



	ofSetBackgroundColor(ofColor::black);

	light.setDirectional();
	light.setPosition(0, 0, 0);
	light.lookAt(ofVec3f(0, 0, 0), ofVec3f(0, 0, 0));
	light.setDiffuseColor(ofColor::white);
	light.enable();




	//planetGroups.add(planet1.planetGui);
}



//--------------------------------------------------------------
void ofApp::update() {




}

//--------------------------------------------------------------
void ofApp::draw() {
	gui.draw();

	ofEnableDepthTest();
	cam.begin();

	//ofNoFill();
	//ofSetColor(ofColor::orangeRed);
	//ofDrawSphere(0, 0, 0, 100);

	//ofSetColor(ofColor::darkBlue);
	//ofDrawSphere(200, 200, 200, 50);


//ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	planet1.drawPlanet();

	ofTranslate(planet1.xpos, planet1.ypos, planet1.zpos);
	planet2.drawPlanet();

	ofTranslate(planet2.xpos, planet2.ypos, planet2.zpos);
	planet3.drawPlanet();

	if (drawGrid) ofDrawGrid(100);
	if (useLight) {
		ofEnableLighting();
	}
	else {
		ofDisableLighting();

	}






	cam.end();
	ofDisableDepthTest();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {



}


