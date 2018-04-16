#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// âÊñ äÓñ{ê›íË
	ofSetFrameRate(60);
	ofBackground(63);

	// âÊñ ì‡ÇÃÉâÉìÉ_ÉÄÇ»èÍèäÇéwíË
	particle.position.x = ofRandom(ofGetWidth());
	particle.position.y = ofRandom(ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	// ê›íËÇµÇΩèÍèäÇ…â~Çï`Ç≠
	particle.draw();
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
