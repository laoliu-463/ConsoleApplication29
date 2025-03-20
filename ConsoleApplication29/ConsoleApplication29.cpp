#include <iostream>
#include<graphics.h>
#include<conio.h> // 添加此行以包含 _getch() 的定义
using namespace std;
void drawTEXT() {
    ExMessage msg = { 0 };
    while (true) {
        system("cls");
        int rx = 30;
        int ry = 380;
        int rw = 200;
        int rh = 60;
        setfillcolor(BLUE);
        fillrectangle(rx, ry, rw + rx, ry + rh);


        setbkmode(TRANSPARENT);
        int height = (rw - textwidth(_T("hello,easyx"))) / 2;
        int width = (rh - textheight(_T("hello,easyx"))) / 2;
        settextcolor(RED);
        outtextxy(rx + height, ry + width, _T("hello,easyx"));
        
       if (peekmessage(&msg, EX_MOUSE)) { // 修复此行，添加分号并更改为 if 语句


            if (msg.message == WM_LBUTTONDOWN) {
                printf("click");
            }

        }
    }
   
    int rx=30;
    int ry = 380;
    int rw = 200;
    int rh = 60;
    setfillcolor(BLUE);
    fillrectangle(rx,ry, rw+rx, ry+rh);
    setbkmode(TRANSPARENT);
    int height = (rw - textwidth(_T("hello,easyx")))/2;
    int width =( rh- textheight(_T("hello,easyx")))/2;
    settextcolor(RED);
    outtextxy(rx+height,ry+width,_T("hello,easyx"));
}
int main(){
    // 初始化图形窗口，大小为 640x480
    initgraph(1000,600);
    setbkcolor(WHITE);

    drawTEXT();

 
  

    // 等待用户按键
    _getch();

    // 关闭图形窗口
    closegraph();

}
