#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofEnableAlphaBlending();//�����x�̗L����
	ofSetCircleResolution(60);//ofsetCircleResolution(n); n = ������
	ofBackground(0, 0, 0);
	//BackGroundColor : ofBackground(R, G, B);
	ofSetFrameRate(60);//���b60�R�}�ŕ`��
	positionX = 0;
	positionY = 0;
	location = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);//���S����X�^�[�g
	velocity = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));//���x�̓����_���ŊJ�n

}

//--------------------------------------------------------------
void ofApp::update() {
	positionX += 2;
	positionY += 3;
	location += velocity;//���x����ʒu���X�V

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(0, 127, 255, 200);
	ofCircle(512, 384, 200);//���W(512,384)�𒆐S�Ƃ������a200�̉~
							//ofSetColor(Red,Green,Blue,Alpha);
							//Alpha=�����x
							//�w��ȍ~�̐}�`�ɓK�������
	ofSetColor(0, 255, 12, 200);
	ofCircle(positionX, positionY, 20);
	//��������F�x�N�g����p�����~�̕`��
	ofSetColor(255, 100, 0, 200);
	ofDrawCircle(location, 40);// �x�N�g�����������~�̕`����@
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