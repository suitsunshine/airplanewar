//坤坤大战
#include<iostream>
#include<graphics.h>
//加载玩家图片
IMAGE ima_kunkun[2];// 玩家
IMAGE bk;

#define high 890
#define width 480
//坤哥的属性
struct player {
	int x;
	int y;
	bool isDie;
};
struct player k;

void kunkun_init(player* pthis, int x, int y) { //属性初始化
	pthis->x = x;
	pthis->y = y;
	pthis->isDie = false;
}

//所有的数据初始化

void load_imag() {
	loadimage(&bk, "resource/back01.png", 501, 999, true); //放在同级目录下才可以加载
	loadimage(ima_kunkun + 0, "resource/R-C.jpg", 50, 50);
	loadimage(ima_kunkun + 1, "resource/R-C (2).jpg", 50, 50);
}
void init() {
	load_imag();
	kunkun_init(&k, (getwidth() - ima_kunkun->getwidth()) / 2, getheight() - high);
	kunkun_init(&k, 250, 892);

}

//绘制界面
void draw() {
	putimage(0, -10, &bk);
	putimage(k.x, k.y, ima_kunkun + 0);
	putimage(k.x, k.y, ima_kunkun + 1);
}


int main() {
	initgraph(500,892, EX_SHOWCONSOLE);
	load_imag();
	init();
	draw();
	system("pause");
	return 0;
}