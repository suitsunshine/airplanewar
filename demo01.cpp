//������ս
#include<iostream>
#include<graphics.h>

#define high 890
#define width 480
//�������ͼƬ
IMAGE ima_kunkun[2];// ���
IMAGE bk;

void load_imag() {
	loadimage(&bk, "resource/back01.png", 501, 999, true); //����ͬ��Ŀ¼�²ſ��Լ���
	//�������ͼƬ
	loadimage(ima_kunkun + 0,"resource/R-C.jpg",50,50);
	loadimage(ima_kunkun + 1,"resource/R-C (2).jpg",50,50);
}


//���������
struct player {
	int x;
	int y;
	bool isDie;
};
struct player k;

void kunkun_init(player* pthis, int x, int y) {
	pthis->x = x;
	pthis->y = y;
	pthis->isDie = false;
}

//���е����ݳ�ʼ��
void init() {
	kunkun_init(&k, 250, 892);
}

//���ƽ���
void draw() {
	putimage(0, 0, &bk);
	putimage(0, 0, ima_kunkun + 0);
	putimage(0, 0, ima_kunkun + 1);
}
int main() {
	initgraph(500,892, EX_SHOWCONSOLE);
	init();
	//������ͼ
	load_imag();
	draw();
	system("pause");
	return 0;
}