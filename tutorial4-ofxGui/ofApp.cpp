#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(127);
	ofSetCircleResolution(32);//円の細かさ

	//colorの初期値、最小値、最大値の設定

	ofColor initColor = ofColor(0, 127, 255, 255);
	ofColor minColor = ofColor(0, 0, 0, 0);
	ofColor maxColor = ofColor(255, 255, 255, 255);

	//positionの初期値、最小値、最大値を設定
	
	ofVec2f initPos = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	ofVec2f minPos = ofVec2f(0, 0);
	ofVec2f maxPos = ofVec2f(ofGetWidth(), ofGetHeight());

	gui.setup();//GUIの生成
	//sliderの初期設定
	//gui.add(slider.setup("name",[初期値],[最小値],[最大値]));

	gui.add(radius.setup("radius", 200, 0, 400));
	gui.add(color.setup("color", initColor, minColor, maxColor));
	gui.add(position.setup("position", initPos, minPos, maxPos));


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(color);
	ofCircle(ofVec2f(position), radius);

	//gui draw
	gui.draw();
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
