//������ս
#include<iostream>
#include<graphics.h>
//�������ͼƬ
IMAGE ima_kunkun[2];// ���
IMAGE bk;

#define high 890
#define width 480
//���������
struct player {
	int x;
	int y;
	bool isDie;
};
struct player k;

void kunkun_init(player* pthis, int x, int y) { //���Գ�ʼ��
	pthis->x = x;
	pthis->y = y;
	pthis->isDie = false;
}

//���е����ݳ�ʼ��

void load_imag() {
	loadimage(&bk, "resource/back01.png", 501, 999, true); //����ͬ��Ŀ¼�²ſ��Լ���
	loadimage(ima_kunkun + 0, "resource/R-C.jpg", 50, 50);
	loadimage(ima_kunkun + 1, "resource/R-C (2).jpg", 50, 50);
}
void init() {
	load_imag();
	kunkun_init(&k, (getwidth() - ima_kunkun->getwidth()) / 2, getheight() - high);
	kunkun_init(&k, 250, 892);

}

//���ƽ���
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