#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofEnableAlphaBlending();//透明度の有効化
	ofSetCircleResolution(4);//ofsetCircleResolution(n); n = 分割数
	ofBackground(0, 0, 0);
	//BackGroundColor : ofBackground(R, G, B);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0, 127, 255,200);
	ofCircle(512, 384, 200);//座標(512,384)を中心とした半径200の円
	//ofSetColor(Red,Green,Blue,Alpha);
	//Alpha=透明度
	//指定以降の図形に適応される
	ofSetColor(0, 255, 12,200);
	ofCircle(412, 384, 200);
	
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
