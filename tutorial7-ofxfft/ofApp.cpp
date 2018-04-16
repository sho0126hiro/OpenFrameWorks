#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofBackground(0);
	// FFT�̃T���v����(2�̗ݏ�)���w�肵�ď�����
	fft.setup(pow(2.0, 10.0));
	// GUI
	gui.setup();
	gui.add(saturation.setup("Saturation", 127, 0, 255));
	gui.loadFromFile("settings.xml");
}

//--------------------------------------------------------------
void ofApp::update(){
	fft.update(); // FFT�X�V
}

//--------------------------------------------------------------
void ofApp::draw(){
	// float�^�̔z���FFT���ʂ��i�[
	vector<float> buffer;
	buffer = fft.getBins();
	// �O���t�ɕ`��
	ofSetLineWidth(ofGetWidth() / float(buffer.size()));
	ofPushMatrix();
	ofTranslate(ofGetWidth()/2, ofGetHeight() / 2);
	for (int i = 0; i < buffer.size(); i++) {
		// �F��ݒ�
		float hue = ofMap(i, 0, buffer.size(), 0, 160);
		float br = ofMap(buffer[i], 0, 1, 0, 255);
		ofColor col;
		col.setHsb(hue, saturation, br);
		ofSetColor(col);
		// �E
		float rx = ofMap(i, 0, buffer.size(), 0, ofGetWidth() / 2.0);
		ofLine(rx, -ofGetWidth() / 2.0, rx, ofGetWidth() / 2.0);
		// ��
		float lx = ofMap(i, 0, buffer.size(), 0, -ofGetWidth() / 2.0);
		ofLine(lx, -ofGetWidth() / 2.0, lx, ofGetWidth() / 2.0);
	}
	ofPopMatrix();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
