#include "Particle.h" // 必ずヘッダーファイルを読み込む

void Particle::draw() {
	// 円を描画
	ofSetHexColor(0x3399cc);
	ofCircle(position, 10);
}