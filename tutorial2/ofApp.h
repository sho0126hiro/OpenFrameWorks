#pragma once

#include "ofMain.h"

struct ColorRGB{
	int r;
	int g;
	int b;
};

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	static const int NUM = 100;

	ofVec2f location[NUM];
	ofVec2f velocity[NUM];//NUM個の位置・速度ベクトル
	ofVec2f pressXY;//マウスクリックを保存

	ColorRGB defaultColor[NUM];
	ColorRGB color[NUM];

	int circle_r;//円の半径

	int g_check;
	double g;//加速度
	double repulsion;//反発係数
	double g_x;//x軸方向の減衰率
	int v_check[NUM];

};