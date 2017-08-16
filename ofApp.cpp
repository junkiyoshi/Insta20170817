#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofSetLineWidth(5);
	//ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();

	float angle = 0;

	for (float radius = 10; radius < 300; radius += 15) {
		float tmp_x = 0;
		float tmp_y = 0;

		ofRotateZ(ofGetFrameNum() * 0.25);
		angle += ofGetFrameNum() * 0.25;

		ofColor c;
		c.setHsb(ofMap((int)(angle) % 360, 0, 360, 0, 255), 255, 255);
		ofSetColor(c);

		for (int deg = ofGetFrameNum(); deg < ofGetFrameNum() + 300; deg += 1) {
			float x = radius * cos(deg * DEG_TO_RAD);
			float y = radius * sin(deg * DEG_TO_RAD);

			if (tmp_x != 0 && tmp_y != 0) {
				ofLine(x, y, tmp_x, tmp_y);
			}

			tmp_x = x;
			tmp_y = y;
		}
	}

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
