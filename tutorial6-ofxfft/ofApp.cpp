#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofBackground(0);
	// FFT�̃T���v����(2�̗ݏ�)���w�肵�ď�����
	fft.setup(pow(2.0, 12.0));
}

//--------------------------------------------------------------
void ofApp::update(){
	fft.update(); // FFT�X�V
}

//--------------------------------------------------------------
void ofApp::draw(){
	// float�^�̔z���FFT���ʂ��i�[
	//vector:�ϒ��z��
	vector<float> buffer;
	buffer = fft.getBins();
	// �O���t�ɕ`��
	ofNoFill();//�h��Ԃ��Ȃ�
	//ofSetLineWidth(2.0);//���̑���
	ofSetLineWidth(ofGetWidth() / float(buffer.size()) / 2.0 - 0.5);
	//ofBeginShape(); - ofEndShaoe();�̊Ԃ��Ȃ��Ă����

	ofBeginShape();
	for (int i = 0; i < buffer.size(); i++) {
		// �F��ݒ�
		float hue = ofMap(i, 0, buffer.size(), 0, 160);
		ofColor col;
		col.setHsb(hue, 255, 255);
		ofSetColor(col);
		//float x = ofMap(i, 0, buffer.size(), 0, ofGetWidth());
		//float y = ofMap(buffer[i], 0, 1, ofGetHeight(), 0);
		float rx = ofMap(i, 0, buffer.size(), ofGetWidth() / 2.0, ofGetWidth());
		float y = ofMap(buffer[i], 0, 1, ofGetHeight(), 0);
		ofLine(rx, ofGetHeight(), rx, y);
		// ��
		float lx = ofMap(i, 0, buffer.size(), ofGetWidth() / 2.0, 0);
		ofLine(lx, ofGetHeight(), lx, y);
	}
	ofEndShape();
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
