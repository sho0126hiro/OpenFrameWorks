#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofEnableAlphaBlending();//�����x�̗L����
	ofSetCircleResolution(4);//ofsetCircleResolution(n); n = ������
	ofBackground(0, 0, 0);
	//BackGroundColor : ofBackground(R, G, B);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0, 127, 255,200);
	ofCircle(512, 384, 200);//���W(512,384)�𒆐S�Ƃ������a200�̉~
	//ofSetColor(Red,Green,Blue,Alpha);
	//Alpha=�����x
	//�w��ȍ~�̐}�`�ɓK�������
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
