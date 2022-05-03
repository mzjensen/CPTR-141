#include <iostream>
#include <string>
#include <cstdlib>
#include <graphics.h>

using namespace std;

int mother_board()
{
   initwindow(800,600); //open a 400x300 graphics window
   setcolor(WHITE);       //choose the colour

   moveto(0,0);
   lineto (0,600);      //Outline of Motherboard
   lineto (800,600);
   lineto (800,0);
   lineto (0,0);




{//PCIe

   setcolor(WHITE);
   moveto (45, 45);     //PCIe_ext 1
   lineto (45, 305);
   lineto (65, 305);
   lineto (65, 45);
   lineto (45, 45);

   moveto (50, 50);     //PCIe_int 1
   lineto (50, 300);
   lineto (60, 300);
   lineto (60, 50);
   lineto (50, 50);

   moveto (75, 45);     //PCIe_ext 2
   lineto (75, 305);
   lineto (95, 305);
   lineto (95, 45);
   lineto (75, 45);

   moveto (80, 50);     //PCIe_int 2
   lineto (80, 300);
   lineto (90, 300);
   lineto (90, 50);
   lineto (80, 50);

   moveto (105, 45);     //PCIe_ext 3
   lineto (105, 305);
   lineto (125, 305);
   lineto (125, 45);
   lineto (105, 45);

   moveto (110, 50);     //PCIe_int 3
   lineto (110, 300);
   lineto (120, 300);
   lineto (120, 50);
   lineto (110, 50);

   moveto (135, 45);     //PCIe_ext 4
   lineto (135, 305);
   lineto (155, 305);
   lineto (155, 45);
   lineto (135, 45);

   moveto (140, 50);     //PCIe_int 4
   lineto (140, 300);
   lineto (150, 300);
   lineto (150, 50);
   lineto (140, 50);





}

{//IO
    moveto (750, 0);
   lineto (750, 100);
   lineto (600, 100);
   lineto (600, 0);

   moveto (550, 0);
   lineto (550, 50);
   lineto (450, 50);
   lineto (450, 0);

   moveto (400, 0);
   lineto (400, 75);
   lineto (200, 75);
   lineto (200, 0);


}

{//CPU
   moveto (500, 200);
   lineto (500, 400);
   lineto (700, 400);
   lineto (700, 200);
   lineto (500, 200);

}

{//RAM
   moveto (700, 450);       //RAM_Ext
   lineto (700, 475);
   lineto (400, 475);
   lineto (400, 450);
   lineto (700, 450);

   moveto (700, 480);       //RAM_Ext2
   lineto (700, 505);
   lineto (400, 505);
   lineto (400, 480);
   lineto (700, 480);

   moveto (695, 455);       //RAM_Int
   lineto (695, 470);
   lineto (405, 470);
   lineto (405, 455);
   lineto (695, 455);

   moveto (695, 485);       //RAM_Int2
   lineto (695, 500);
   lineto (405, 500);
   lineto (405, 485);
   lineto (695, 485);
}

{//SATA
    moveto (200, 575);       //SATA_int_1
    lineto (200, 525);
    lineto (175, 525);
    lineto (175, 575);
    lineto (200, 575);

    moveto (165, 575);       //SATA_int_2
    lineto (165, 525);
    lineto (140, 525);
    lineto (140, 575);
    lineto (165, 575);

    moveto (200, 520);       //SATA_int_3
    lineto (200, 470);
    lineto (175, 470);
    lineto (175, 520);
    lineto (200, 520);

    moveto (165, 520);       //SATA_int_4
    lineto (165, 470);
    lineto (140, 470);
    lineto (140, 520);
    lineto (165, 520);




}

{//POWER_SUPP
    moveto (550, 130);      //PS_ext
    lineto (360, 130);
    lineto (360, 165);
    lineto (550, 165);
    lineto (550, 130);

    moveto (545, 135);      //PS_int_1
    lineto (535, 135);
    lineto (535, 145);
    lineto (545, 145);
    lineto (545, 135);

    moveto (530, 135);      //PS_int_2
    lineto (520, 135);
    lineto (520, 145);
    lineto (530, 145);
    lineto (530, 135);

    moveto (510, 135);      //PS_int_3
    lineto (500, 135);
    lineto (500, 145);
    lineto (510, 145);
    lineto (510, 135);

    moveto (495, 135);      //PS_int_4
    lineto (485, 135);
    lineto (485, 145);
    lineto (495, 145);
    lineto (495, 135);

    moveto (480, 135);      //PS_int_5
    lineto (470, 135);
    lineto (470, 145);
    lineto (480, 145);
    lineto (480, 135);

    moveto (465, 135);      //PS_int_6
    lineto (455, 135);
    lineto (455, 145);
    lineto (465, 145);
    lineto (465, 135);

    moveto (450, 135);      //PS_int_7
    lineto (440, 135);
    lineto (440, 145);
    lineto (450, 145);
    lineto (450, 135);

    moveto (435, 135);      //PS_int_8
    lineto (425, 135);
    lineto (425, 145);
    lineto (435, 145);
    lineto (435, 135);

    moveto (420, 135);      //PS_int_9
    lineto (410, 135);
    lineto (410, 145);
    lineto (420, 145);
    lineto (420, 135);

    moveto (405, 135);      //PS_int_10
    lineto (395, 135);
    lineto (395, 145);
    lineto (405, 145);
    lineto (405, 135);

    moveto (390, 135);      //PS_int_11
    lineto (380, 135);
    lineto (380, 145);
    lineto (390, 145);
    lineto (390, 135);

    moveto (375, 135);      //PS_int_12
    lineto (365, 135);
    lineto (365, 145);
    lineto (375, 145);
    lineto (375, 135);

    moveto (545, 150);      //PS_int_13
    lineto (535, 150);
    lineto (535, 160);
    lineto (545, 160);
    lineto (545, 150);

    moveto (530, 150);      //PS_int_14
    lineto (520, 150);
    lineto (520, 160);
    lineto (530, 160);
    lineto (530, 150);

    moveto (510, 150);      //PS_int_15
    lineto (500, 150);
    lineto (500, 160);
    lineto (510, 160);
    lineto (510, 150);

    moveto (495, 150);      //PS_int_16
    lineto (485, 150);
    lineto (485, 160);
    lineto (495, 160);
    lineto (495, 150);

    moveto (480, 150);      //PS_int_17
    lineto (470, 150);
    lineto (470, 160);
    lineto (480, 160);
    lineto (480, 150);

    moveto (465, 150);      //PS_int_18
    lineto (455, 150);
    lineto (455, 160);
    lineto (465, 160);
    lineto (465, 150);

    moveto (450, 150);      //PS_int_19
    lineto (440, 150);
    lineto (440, 160);
    lineto (450, 160);
    lineto (450, 150);

    moveto (435, 150);      //PS_int_20
    lineto (425, 150);
    lineto (425, 160);
    lineto (435, 160);
    lineto (435, 150);

    moveto (420, 150);      //PS_int_21
    lineto (410, 150);
    lineto (410, 160);
    lineto (420, 160);
    lineto (420, 150);

    moveto (405, 150);      //PS_int_22
    lineto (395, 150);
    lineto (395, 160);
    lineto (405, 160);
    lineto (405, 150);

    moveto (390, 150);      //PS_int_23
    lineto (380, 150);
    lineto (380, 160);
    lineto (390, 160);
    lineto (390, 150);

    moveto (375, 150);      //PS_int_24
    lineto (365, 150);
    lineto (365, 160);
    lineto (375, 160);
    lineto (375, 150);

}

{//JUMPERS
    moveto(5, 500);
    lineto(5,520);
    lineto(15,520);
    lineto(15,500);
    lineto(5,500);

    circle(10,505,1);
    circle(10,510,1);
    circle(10,515,1);


    moveto(5,530);
    lineto(5,550);
    lineto(15,550);
    lineto(15,530);
    lineto(5,530);

    circle(10,535,1);
    circle(10,540,1);
    circle(10,545,1);


    moveto(5, 585);
    lineto(5, 595);
    lineto(25, 595);
    lineto(25, 585);
    lineto(5, 585);

    circle(10,590,1);
    circle(15,590,1);
    circle(20,590,1);


    moveto(35, 585);
    lineto(35, 595);
    lineto(55, 595);
    lineto(55, 585);
    lineto(35, 585);

    circle(40, 590, 1);
    circle(45, 590, 1);
    circle(50, 590, 1);


}

{//BATT.
    circle(100, 400, 50);
    circle(100,400, 45);
}

{//THING

    rectangle(200,150,250,405);
    moveto(200,175);
    lineto(190,175);
    lineto(190,200);
    lineto(200,200);

    rectangle(190,220,200,245);
    rectangle(190,265,200,290);
    rectangle(190,310,200,335);
    rectangle(190,355,200,380);

    rectangle(250,175,260,200);
    rectangle(250,220,260,245);
    rectangle(250,265,260,290);
    rectangle(250,310,260,335);
    rectangle(250,355,260,380);

}

{//CHIP
    moveto(30, 510);
    lineto(30, 560);
    lineto(80, 560);
    lineto(80, 510);
    lineto(30,510);

}

{//CHIPSET

    moveto(450, 250);
    lineto(350, 250);
    lineto(350, 350);
    lineto(450, 350);
    lineto(450,250);

}

{//ELECTRON_MOVEMENT




    for(int i=0; i<7; i++)  //START
    {
        setcolor(RED);
        circle(500,50+10*i,1);
        delay(30);
    }
    for(int i=0; i<12; i++)  //STEP_1
    {
        circle(500+10*i,120,1);
        delay(30);

    }
    for(int i=0; i<9; i++)  //STEP_2
    {
        circle(620, 120+10*i, 1);
        delay(30);
    }
    for(int i=0; i<7; i++)  //STEP_3
    {
        circle(700+10*i, 350, 1);
        delay(30);
    }
    for(int i=0; i<12; i++)  //STEP_4
    {
        circle(770, 350+i*10, 1);
        delay(30);
    }
    for(int i=0; i<8; i++)  //STEP_5
    {
        circle(770-10*i, 460, 1);
        delay(30);
    }
    for(int i=0; i<8; i++)  //STEP_6
    {
        circle(400-10*i, 490, 1);
        delay(30);
    }
    for(int i=0; i<7; i++)  //STEP_7
    {
        circle(320, 490+10*i, 1);
        delay(30);
    }
    for(int i=0; i<13; i++)  //STEP_8
    {
        circle(320-10*i, 560, 1);
        delay(30);
    }



}

}

int hard_drive()
{

    initwindow(800, 600);    //Open a window to draw in.
    clearviewport();
   for(int i = 0; i < 650; ++i)  //Animation requires a loop.
   {

      setfillstyle(SOLID_FILL,DARKGRAY);
      floodfill(1,1,WHITE);

      setfillstyle(SOLID_FILL,YELLOW);
      fillellipse (500,300,190,190);

      setfillstyle(SOLID_FILL,LIGHTGRAY);
      fillellipse (500,300,60,60);

      setcolor(BLACK);
      rectangle(100, 100, 700, 500);
      circle (500,300,190);
      circle (500,300,30);
      circle (500,300,60);

      arc (500,300,0+100*i,90+100*i ,180); // disk spinning annimation
      arc (500,300,180+100*i,210+100*i,140); // disk spinning annimation

      rectangle (70,120,100,200);
      rectangle (0,150,70,170);

      line(100,150,160,150);
      line(160,150,160,220);
      line(160,220,210,220);

      line(100,170,140,170);
      line(140,170,140,240);
      line(140,240,210,240);

      int poly[8];
      poly[0] = 200;
      poly[1] = 200;
      poly[2] = 450;
      poly[3] = 390;
      poly[4] = 210;
      poly[5] = 270;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,LIGHTGRAY);
      fillpoly(4, poly);

      rectangle(150,350, 250,450);
      setfillstyle(SOLID_FILL,DARKGRAY);

      setcolor(RED); //this is signal/electron guy animation
      setfillstyle(SOLID_FILL,LIGHTRED);
      if(i>=0&&i<=151)
      fillellipse(0+i,160,10,10);
      else if(i>=151&&i<=221)
      fillellipse(151,9+i,10,10);
      else if(i>=221&&i<=290)
      fillellipse(-70+i,230,10,10);
      else if(i>=290&&i<=520)
      fillellipse(220-290+i,230-.7*290+.7*i,10,10);
      else if(i>=520&&i<=650)
      {
          arc(500,300,220+10*i,300+10*i,102);
          arc(500,300,220+10*i,300+10*i,101);
          arc(500,300,220+10*i,300+10*i,100);
          arc(500,300,220+10*i,300+10*i,99);
          arc(500,300,220+10*i,300+10*i,98);
          arc(500,300,220+10*i,300+10*i,97);
          arc(500,300,220+10*i,300+10*i,96);
          arc(500,300,220+10*i,300+10*i,95);
          arc(500,300,220+10*i,300+10*i,94);
          arc(500,300,220+10*i,300+10*i,93);
          arc(500,300,220+10*i,300+10*i,92);

      }

      swapbuffers();   //Swap the memory buffers.
      clearviewport(); //Erase the active page before writing to it.

    }
}


int main()
{
   mother_board();
   hard_drive();

   //End program.
    cout << "Close window to terminate..." << endl;
    cin.get();
    closegraph();
    return 0;
}

