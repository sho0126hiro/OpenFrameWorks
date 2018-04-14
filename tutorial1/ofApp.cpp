#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofEnableAlphaBlending();//透明度の有効化
	ofSetCircleResolution(60);//ofsetCircleResolution(n); n = 分割数
	ofBackground(0, 0, 0);
	//BackGroundColor : ofBackground(R, G, B);
	ofSetFrameRate(60);//毎秒60コマで描画
	positionX = 0;
	positionY = 0;
	location = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);//中心からスタート
	velocity = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));//速度はランダムで開始

}

//--------------------------------------------------------------
void ofApp::update() {
	positionX += 2;
	positionY += 3;
	location += velocity;//速度から位置を更新

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(0, 127, 255, 200);
	ofCircle(512, 384, 200);//座標(512,384)を中心とした半径200の円
							//ofSetColor(Red,Green,Blue,Alpha);
							//Alpha=透明度
							//指定以降の図形に適応される
	ofSetColor(0, 255, 12, 200);
	ofCircle(positionX, positionY, 20);
	//ここから：ベクトルを用いた円の描画
	ofSetColor(255, 100, 0, 200);
	ofDrawCircle(location, 40);// ベクトルを持ちた円の描画方法
	//bound
	if (location.x < 0 || location.x> ofGetWidth()) {
		velocity.x *= -1;
	}
	if (location.y<0 || location.y> ofGetHeight()) {
		velocity.y *= -1;
	}
	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}