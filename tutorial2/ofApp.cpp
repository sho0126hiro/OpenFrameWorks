#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofEnableAlphaBlending();//�����x�̗L����
	ofSetCircleResolution(60);//ofsetCircleResolution(n); n = ������
	ofBackground(0, 0, 0);
	ofSetFrameRate(60);//���b60�R�}�ŕ`��
	circle_r = 15;
	g_check = 0;
	g = 2.0;
	repulsion = 0.8;
	g_x = 0.04;
	for (int i = 0; i < NUM; i++) {
		location[i] = ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);//���S����X�^�[�g
		velocity[i] = ofVec2f(ofRandom(-30, 30), ofRandom(-30, 30));//���x�̓����_���ŊJ�n
		//�����_���ȐF�𐶐�
		color[i].r = ofRandom(0, 255);
		color[i].g = ofRandom(0, 255);
		color[i].b = ofRandom(0, 255);
		defaultColor[i] = color[i];
		v_check[i] = 0;
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	if(g_check==0) {
		for (int i = 0; i < NUM; i++) {
			location[i] += velocity[i];//���x����ʒu���X�V
		}
	}
	else if (g_check == 1) {//�}�E�X���N���b�N
		for (int i = 0; i < NUM; i++) {
			if(velocity[i].x>0)velocity[i].x = velocity[i].x - g_x;
			else velocity[i].x = velocity[i].x + g_x;
			velocity[i].y = velocity[i].y + g;
			location[i] = location[i] + velocity[i];
			if (location[i].y > ofGetHeight() - circle_r) {
				location[i].y = ofGetHeight() - circle_r;
				velocity[i].y = -1 * velocity[i].y * repulsion;

			}
		}
	}
	else if (g_check == 2) {//�}�E�X�E�N���b�N
		for (int i = 0; i < NUM; i++) {
			location[i] = ofVec2f(pressXY.x,pressXY.y);//�N���b�N�����Ƃ��납��X�^�[�g
			velocity[i] = ofVec2f(ofRandom(-20, 20), ofRandom(-20, 20));//���x�̓����_���ŊJ�n
			g_check = 0;
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < NUM; i++) {
		ofSetColor(color[i].r, color[i].g, color[i].b, 240);
		ofDrawCircle(location[i], circle_r);// �x�N�g�����������~�̕`����@

		if (location[i].x - circle_r < 0 || location[i].x + circle_r > ofGetWidth()) {
			velocity[i].x *= -1;
		}
		if (location[i].y - circle_r < 0 || location[i].y + circle_r > ofGetHeight()) {
			velocity[i].y *= -1;
		}
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	//ASCII code
	cout << "keyPressed " << key <<"("<< char(key)<<")"<< endl;
	if (key == 97) { //pressed"a"
		for (int i = 0; i < NUM; i ++ )color[i].r = 255;
	}
	if (key == 115) { //pressed"s"
		for (int i = 0; i < NUM; i++)color[i].g = 255;
	}
	if (key == 100) { //pressed"d"
		for (int i = 0; i < NUM; i++)color[i].b = 255;
	}
	if (key == 102) { //pressed"f"
		for (int i = 0; i < NUM; i++)color[i]=defaultColor[i];
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	cout << "keyReleased " << key << endl;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	cout << "mousePressed: " << x << ", " << y << " button: " << button << endl;
	//�����E�o�E���h
	pressXY.x = x;
	pressXY.y = y;
	g_check = 1;
	for (int i = 0; i < NUM; i++) {
		if (velocity[i].y > 0)v_check[i] = 1;
		if (velocity[i].y < 0)v_check[i] = 2;
	}
	if (button == 2) {
		g_check = 2;
	}
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
