#include<windows.h>
#include<iostream>
#include<conio.h>

#define BREAK_F1 0x70

int main(){
    POINT p;
    int dis = 300;

    Sleep(5000);
    GetCursorPos(&p);
    INPUT input = {0};
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    SendInput(1, &input, sizeof(input));

    while(dis>0){
        if(GetAsyncKeyState(BREAK_F1)){
            break;
        }
        SetCursorPos(p.x + dis, p.y);
        dis-=8;
        Sleep(500);

        SetCursorPos(p.x, p.y + dis);
        
        Sleep(500);
        SetCursorPos(p.x - dis, p.y);

        dis-=8;
        Sleep(500);
        SetCursorPos(p.x, p.y - dis);

    }
}