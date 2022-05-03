#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int maxx,maxy;

    initwindow(800, 600);
    clearviewport();

    maxx = getwindowwidth( )/2;
    maxy = getwindowheight( )/2;

    for(int i=700; i>=-500; i--)
    {
        delay(12);

        settextstyle(BOLD_FONT, HORIZ_DIR, 6);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i,"CREDITS");

        settextstyle(BOLD_FONT, HORIZ_DIR, 4);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i+100,"Monitor - Brian Obaigwa");

        settextstyle(BOLD_FONT, HORIZ_DIR, 4);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i+150,"Mouse - Caleb Rexin");

        settextstyle(BOLD_FONT, HORIZ_DIR, 4);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i+200,"Computer Tower - Robbie Merritt");

        settextstyle(BOLD_FONT, HORIZ_DIR, 4);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i+250,"Motherboard - Brandon Pierce");

        settextstyle(BOLD_FONT, HORIZ_DIR, 4);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i+300,"Hard Drive - Brendan Kennedy");

        settextstyle(BOLD_FONT, HORIZ_DIR, 4);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i+400,"Team Leader - Zachri Jensen");
    }

    closegraph();
    return 0;
}
