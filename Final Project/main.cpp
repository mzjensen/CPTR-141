/*****************************************************************************
 Program file name: Final Project      OS: Windows 7		Final Project
 Programmers: Brendan Kennedy 		   Class: CPTR141       Date: 5/7/13
              Robbie Merritt
              Brian Obaigwa
              Brandon Pierce
              Caleb Rexin
              Zachri Jensen

 Compiler: Code::Blocks

 Assistance/references: Professor Klein, class powerpoint lectures,
                        http://www.cs.colorado.edu/~main/cs1300/doc/bgi/

 Description: A short animation with seven different scenes that follows
              the journey of a signal/electron as it travels through a
              computer.

 Inputs: N/A
 Outputs: Graphics window

 Special Comments: Some of the functions could be transitioned into by opening a
                   new graphics window.  We weren't sure how to fix it, but it
                   runs fine if a few new windows are opened during the cartoon.

~~~~~~~~~~~~~~~~~~~~~~~~~~Grading Criteria~~~~~~~~~~~~~~~~~~~~~~~~~~
 Assignment Requirements: ___/3.0
 Code Format/Cosmetics: ___/3.0
 Header & Code Comments: ___/2.0
 Output Format/Cosmetics: ___/2.0

 ***Does Not Compile***: ___ (-10.0)
 ***Late Work Deduction***: ___ (-0.5/day)
 Total Grade: ___/10.0

*****************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <graphics.h>

using namespace std;

void screen_start()  //First scene with computer monitor
{
    setcolor(WHITE);
    rectangle (0,800,0,600);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill (775,555,WHITE);

    setcolor (BLACK); // outline of outer rectangle
    rectangle (100,140,690,450);

    //Outer rectangle
    int poly1[8];
    poly1[0]=100;
    poly1[1]=140;
    poly1[2]=690;
    poly1[3]=140;
    poly1[4]=690;
    poly1[5]=450;
    poly1[6]=100;
    poly1[7]=450;

    setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(4,poly1);

    setcolor(BLACK);  //outline of inner rectangle
    rectangle (120,160,670,430);

    //Inner rectangle
    int poly2[8];
    poly1[0]=120;
    poly1[1]=160;
    poly1[2]=670;
    poly1[3]=160;
    poly1[4]=670;
    poly1[5]=430;
    poly1[6]=120;
    poly1[7]=430;

    setfillstyle(SOLID_FILL,BLACK);
    fillpoly(4,poly1);

    settextstyle(9,0,1);
    setcolor(WHITE);
    outtextxy(359,431,"DELL"); //displays the brand of the screen

    //outline of table
    setcolor(BLACK);
    int poly3[8];
    poly3[0] = 0;
    poly3[1] = 480;
    poly3[2] = 800;
    poly3[3] = 480;
    poly3[4] = 800;
    poly3[5] = 600;
    poly3[6] = 0;
    poly3[7] = 600;
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(4, poly3);

    //outline of stand
    setcolor(BLACK);
    poly2[0] = 330;
    poly2[1] = 450;
    poly2[2] = 450;
    poly2[3] = 450;
    poly2[4] = 450;
    poly2[5] = 500;
    poly2[6] = 330;
    poly2[7] = 500;
    setfillstyle(SOLID_FILL,BLACK);
    fillpoly(4, poly2);

    settextstyle(BOLD_FONT, HORIZ_DIR, 1);
    setcolor(WHITE);
    outtextxy(150,190,">> Press the left mouse button to continue...");

    setcolor(BLACK);       //outline of keyboard
    rectangle(230,530,550,580);
    setfillstyle(LINE_FILL,WHITE);
    floodfill(545,565,BLACK);

    setfillstyle(SOLID_FILL,BLACK);  //Mouse
    fillellipse(650,550,15,25);

    delay(3000);
}

void mouse()  //Scene with hand and mouse
{
    clearviewport();
    for(int i = 0; i < 350; ++i)
    {
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(1,1,WHITE);

        setfillstyle(SOLID_FILL, COLOR(172,157,147));
        fillellipse (390,500,110,50);

        setcolor(COLOR(175,221,233));
        rectangle(0, 500, 600, 800);

        setfillstyle(SOLID_FILL,BROWN);
        floodfill(1,599,COLOR(175,221,233));

        setcolor(BLACK);


        if(i>=0&&i<=90)  //Movement of hand
        {
            int poly[12];
            poly[0] = 0;
            poly[1] = 210+i;
            poly[2] = 180;
            poly[3] = 180+i;
            poly[4] = 225;
            poly[5] = 165+i;
            poly[6] = 250;
            poly[7] = 180+i;
            poly[8] = 250;
            poly[9] = 250+i;
            poly[10] = poly[0];
            poly[11] = 350+i;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(6, poly);

            int poly2[8];
            poly2[0] = 250;
            poly2[1] = 180+i;
            poly2[2] = 455;
            poly2[3] = 155+i;
            poly2[4] = 470;
            poly2[5] = 180+i;
            poly2[6] = 250;
            poly2[7] = 250+i;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(4, poly2);

            int poly3[16];
            poly3[0] = 470;
            poly3[1] = 180+i;
            poly3[2] = 500;
            poly3[3] = 275+i;
            poly3[4] = 490;
            poly3[5] = 390+i;
            poly3[6] = 470;
            poly3[7] = 380+i;
            poly3[8] = 460;
            poly3[9] = 360+i;
            poly3[10] = 455;
            poly3[11] = 280+i;
            poly3[12] = 425;
            poly3[13] = 220+i;
            poly3[14] = 410;
            poly3[15] = 190+i;
            poly3[16] = 470;
            poly3[17] = 180+i;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(8, poly3);

            int poly4[16];
            poly4[0] = 250;
            poly4[1] = 250+i;
            poly4[2] = 300;
            poly4[3] = 300+i;
            poly4[4] = 360;
            poly4[5] = 320+i;
            poly4[6] = 400;
            poly4[7] = 310+i;
            poly4[8] = 400;
            poly4[9] = 290+i;
            poly4[10] = 370;
            poly4[11] = 280+i;
            poly4[12] = 330;
            poly4[13] = 260+i;
            poly4[14] = 340;
            poly4[15] = 220+i;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(8, poly4);
        }


        if(i>=90&&i<=350)  //Keeps the hand still while the dot moves
        {
            int poly[12];
            poly[0] = 0;
            poly[1] = 300;
            poly[2] = 180;
            poly[3] = 270;
            poly[4] = 225;
            poly[5] = 255;
            poly[6] = 250;
            poly[7] = 270;
            poly[8] = 250;
            poly[9] = 340;
            poly[10] = poly[0];
            poly[11] = 440;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(6, poly);

            int poly2[8];
            poly2[0] = 250;
            poly2[1] = 270;
            poly2[2] = 455;
            poly2[3] = 245;
            poly2[4] = 470;
            poly2[5] = 270;
            poly2[6] = 250;
            poly2[7] = 340;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(4, poly2);

            int poly3[16];
            poly3[0] = 470;
            poly3[1] = 270;
            poly3[2] = 500;
            poly3[3] = 365;
            poly3[4] = 490;
            poly3[5] = 480;
            poly3[6] = 470;
            poly3[7] = 470;
            poly3[8] = 460;
            poly3[9] = 450;
            poly3[10] = 455;
            poly3[11] = 370;
            poly3[12] = 425;
            poly3[13] = 310;
            poly3[14] = 410;
            poly3[15] = 280;
            poly3[16] = 470;
            poly3[17] = 270;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(8, poly3);

            int poly4[16];
            poly4[0] = 250;
            poly4[1] = 340;
            poly4[2] = 300;
            poly4[3] = 390;
            poly4[4] = 360;
            poly4[5] = 410;
            poly4[6] = 400;
            poly4[7] = 400;
            poly4[8] = 400;
            poly4[9] = 380;
            poly4[10] = 370;
            poly4[11] = 370;
            poly4[12] = 330;
            poly4[13] = 350;
            poly4[14] = 340;
            poly4[15] = 310;
            setfillstyle(SOLID_FILL,COLOR(255,238,170));
            fillpoly(8, poly4);
        }


        line(500,500,605,500);  //Wire
        line(498,490,605,490);

        line(604,500,654,550);
        line(606,490,666,550);

        line(655,550,655,600);
        line(665,550,665,600);

        int poly6[8];  //Mouse
        poly6[0] = 280;
        poly6[1] = 500;
        poly6[2] = 500;
        poly6[3] = 500;
        poly6[4] = 290;
        poly6[5] = 480;
        poly6[6] = poly6[0];
        poly6[7] = poly6[1];
        setfillstyle(SOLID_FILL,COLOR(108,93,83));
        fillpoly(4, poly6);


        setcolor(RED);  //Dot animation
        setfillstyle(SOLID_FILL,RED);
        if(i>=90&&i<=190)
        fillellipse(410+i,495,7,7);
        else if(i>=190&&i<=240)
        fillellipse(705-290+i,585-.9*290+.9*i,7,7);
        else if(i>=240&&i<=300)
        fillellipse(660,300+i,7,7);

        delay(4);
        swapbuffers();
        clearviewport();
    }

    delay(300);
}

void tower()  //Scene with computer tower
{
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(1,1,WHITE);

    setcolor(LIGHTGRAY);
    rectangle(40,40,300,600); //Body
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(41,41,LIGHTGRAY);

    setcolor(RED);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(60,80,15,15); //Button

    setcolor(LIGHTGRAY);
    rectangle(40,60,300,100);
    rectangle(40,150,300,180); //CD
    bar(40,160,300,170);

    for(int i=1;i<10;i++)  //Red Light
    {
        setcolor(RED);
        rectangle(260,160,280+i,170-i);
    }

    for(int i=1;i<40;i++)  // Random Thing in Middle
        for(int k=1;k<10;k++)
        {
        setcolor(LIGHTGRAY);
        rectangle(100,200+i,250,300-i);
        rectangle(100+k,200,250-k,300);
        }

    circle(100,500,20);

    for(int i=0;i<100;i++)  //Power button
    {
        setcolor(GREEN);
        circle(100,500,19);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(100,500,GREEN);
    }
    for(int i=1;i<15;i++)  //Cord Going Into Computer
    {
        setcolor(BLACK);
        moveto(390+i,600+i);
        lineto(300+i,160+i);
    }

    setcolor(BLACK);
    arc(100,500,120,420,10);
    moveto(100,492);
    lineto(100,487);

    for(int i=1;i<96;i++)  //Dot animation
    {
        setfillstyle(SOLID_FILL,RED);
        fillellipse(405-i,600-i*4.5,6,6);
        delay(30);
        setfillstyle(SOLID_FILL,BLACK);
        fillellipse(405-i,600-i*4.5,6,6);
    }

    for(int i=1;i<10;i++)  //Green Light animation
    {
        setcolor(GREEN);
        rectangle(260,160,280+i,170-i);
        delay(100);
    }

    delay(300);
}

void mobo()  //Scene with motherboard
{
    for(int i=0; i<=110; i++)  //Main animation loop
    {
        {//OUTLINE OF MOTHERBOARD
           setcolor(LIGHTGRAY);
           moveto(0,0);
           lineto (0,600);
           lineto (800,600);
           lineto (800,0);
           lineto (0,0);

           setfillstyle(SOLID_FILL, BLACK);
           fillellipse(400,300,1000,1000);

           setfillstyle(HATCH_FILL, GREEN);
           floodfill(400,300,WHITE);
        }

        {//PCIe
            int poly2[8];
            poly2[0] = 45;
            poly2[1] = 45;
            poly2[2] = 45;
            poly2[3] = 305;
            poly2[4] = 65;
            poly2[5] = 305;
            poly2[6] = 65;
            poly2[7] = 45;

            setfillstyle(SOLID_FILL,DARKGRAY);
           fillpoly(4,poly2);

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

           int poly3[8];
            poly3[0] = 75;
            poly3[1] = 45;
            poly3[2] = 75;
            poly3[3] = 305;
            poly3[4] = 95;
            poly3[5] = 305;
            poly3[6] = 95;
            poly3[7] = 45;
            setfillstyle(SOLID_FILL,DARKGRAY);
           fillpoly(4,poly3);

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

           int poly4[8];
            poly4[0] = 105;
            poly4[1] = 45;
            poly4[2] = 105;
            poly4[3] = 305;
            poly4[4] = 125;
            poly4[5] = 305;
            poly4[6] = 125;
            poly4[7] = 45;
            setfillstyle(SOLID_FILL,DARKGRAY);
           fillpoly(4,poly4);

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

           int poly5[8];
            poly5[0] = 135;
            poly5[1] = 45;
            poly5[2] = 135;
            poly5[3] = 305;
            poly5[4] = 155;
            poly5[5] = 305;
            poly5[6] = 155;
            poly5[7] = 45;
            setfillstyle(SOLID_FILL,DARKGRAY);
           fillpoly(4,poly5);

           moveto (140, 50);     //PCIe_int 4
           lineto (140, 300);
           lineto (150, 300);
           lineto (150, 50);
           lineto (140, 50);
        }

        {//IO
           rectangle(750,0,600,100);
            int poly6[8];
            poly6[0] = 750;
            poly6[1] = 0;
            poly6[2] = 600;
            poly6[3] = 0;
            poly6[4] = 600;
            poly6[5] = 100;
            poly6[6] = 750;
            poly6[7] = 100;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly6);

           rectangle(550,0,450,50);
            int poly7[8];
            poly7[0] = 550;
            poly7[1] = 0;
            poly7[2] = 450;
            poly7[3] = 0;
            poly7[4] = 450;
            poly7[5] = 50;
            poly7[6] = 550;
            poly7[7] = 50;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly7);

           rectangle(400,0,200,75);
            int poly8[8];
            poly8[0] = 400;
            poly8[1] = 0;
            poly8[2] = 200;
            poly8[3] = 0;
            poly8[4] = 200;
            poly8[5] = 75;
            poly8[6] = 400;
            poly8[7] = 75;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly8);
        }

        {//CPU
            int poly1[8];
           poly1[0]=500;
           poly1[1]=200;
           poly1[2]=700;
           poly1[3]=200;
           poly1[4]=700;
           poly1[5]=400;
           poly1[6]=500;
           poly1[7]=400;

           setfillstyle(SOLID_FILL,WHITE);
           fillpoly(4,poly1);

           rectangle(500,200,700,400);
        }

        {//RAM
          int poly8[8];
            poly8[0] = 700;
            poly8[1] = 450;
            poly8[2] = 700;
            poly8[3] = 475;
            poly8[4] = 400;
            poly8[5] = 475;
            poly8[6] = 400;
            poly8[7] = 450;
            setfillstyle(SOLID_FILL,DARKGRAY);
            fillpoly(4,poly8);

           moveto (700, 450);       //RAM_Ext
           lineto (700, 475);
           lineto (400, 475);
           lineto (400, 450);
           lineto (700, 450);

           int poly9[8];
            poly8[0] = 700;
            poly8[1] = 480;
            poly8[2] = 700;
            poly8[3] = 505;
            poly8[4] = 400;
            poly8[5] = 505;
            poly8[6] = 400;
            poly8[7] = 480;
            setfillstyle(SOLID_FILL,DARKGRAY);
            fillpoly(4,poly8);

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

            int poly10[8];
            poly10[0] = 200;
            poly10[1] = 575;
            poly10[2] = 200;
            poly10[3] = 525;
            poly10[4] = 175;
            poly10[5] = 525;
            poly10[6] = 175;
            poly10[7] = 575;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly10);

            moveto (165, 575);       //SATA_int_2
            lineto (165, 525);
            lineto (140, 525);
            lineto (140, 575);
            lineto (165, 575);

            int poly11[8];
            poly11[0] = 165;
            poly11[1] = 575;
            poly11[2] = 165;
            poly11[3] = 525;
            poly11[4] = 140;
            poly11[5] = 525;
            poly11[6] = 140;
            poly11[7] = 575;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly11);


            moveto (200, 520);       //SATA_int_3
            lineto (200, 470);
            lineto (175, 470);
            lineto (175, 520);
            lineto (200, 520);

            int poly12[8];
            poly12[0] = 200;
            poly12[1] = 520;
            poly12[2] = 200;
            poly12[3] = 470;
            poly12[4] = 175;
            poly12[5] = 470;
            poly12[6] = 175;
            poly12[7] = 520;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly12);

            moveto (165, 520);       //SATA_int_4
            lineto (165, 470);
            lineto (140, 470);
            lineto (140, 520);
            lineto (165, 520);

            int poly13[8];
            poly13[0] = 165;
            poly13[1] = 520;
            poly13[2] = 165;
            poly13[3] = 470;
            poly13[4] = 140;
            poly13[5] = 470;
            poly13[6] = 140;
            poly13[7] = 520;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly13);
        }

        {//POWER_SUPP
            rectangle(550,130,360,165);
            int poly14[8];
            poly14[0] = 550;
            poly14[1] = 130;
            poly14[2] = 360;
            poly14[3] = 130;
            poly14[4] = 360;
            poly14[5] = 165;
            poly14[6] = 550;
            poly14[7] = 165;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly14);

            rectangle(535,135,545,145);
            rectangle(530,135,520,145);
            rectangle(510,135,500,145);
            rectangle(495,135,485,145);
            rectangle(480,135,470,145);
            rectangle(465,135,455,145);
            rectangle(450,135,440,145);
            rectangle(435,135,425,145);
            rectangle(420,135,410,145);
            rectangle(405,135,395,145);
            rectangle(390,135,380,145);
            rectangle(375,135,365,145);
            rectangle(545,150,535,160);
            rectangle(530,150,520,160);
            rectangle(510,150,500,160);
            rectangle(495,150,485,160);
            rectangle(480,150,470,160);
            rectangle(465,150,455,160);
            rectangle(450,150,440,160);
            rectangle(435,150,425,160);
            rectangle(420,150,410,160);
            rectangle(405,150,395,160);
            rectangle(390,150,380,160);
            rectangle(375,150,365,160);
        }

        {//JUMPERS
            rectangle(5,500,15,520);
            circle(10,505,1);
            circle(10,510,1);
            circle(10,515,1);

            int poly15[8];
            poly15[0] = 5;
            poly15[1] = 500;
            poly15[2] = 5;
            poly15[3] = 520;
            poly15[4] = 15;
            poly15[5] = 520;
            poly15[6] = 15;
            poly15[7] = 500;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly15);
            circle(10,505,1);
            circle(10,510,1);
            circle(10,515,1);

            rectangle(5,530,15,550);
            int poly16[8];
            poly15[0] = 5;
            poly15[1] = 530;
            poly15[2] = 5;
            poly15[3] = 550;
            poly15[4] = 15;
            poly15[5] = 550;
            poly15[6] = 15;
            poly15[7] = 530;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly15);

            circle(10,535,1);
            circle(10,540,1);
            circle(10,545,1);

            rectangle(5,585,25,595);
            int poly17[8];
            poly15[0] = 5;
            poly15[1] = 585;
            poly15[2] = 5;
            poly15[3] = 595;
            poly15[4] = 25;
            poly15[5] = 595;
            poly15[6] = 25;
            poly15[7] = 585;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly15);

            circle(10,590,1);
            circle(15,590,1);
            circle(20,590,1);

            rectangle(35,585,55,595);
            int poly18[8];
            poly15[0] = 35;
            poly15[1] = 585;
            poly15[2] = 35;
            poly15[3] = 595;
            poly15[4] = 55;
            poly15[5] = 595;
            poly15[6] = 55;
            poly15[7] = 585;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly15);
            circle(40, 590, 1);
            circle(45, 590, 1);
            circle(50, 590, 1);
        }

        {//BATT.
            setfillstyle(SOLID_FILL,DARKGRAY);
            fillellipse(100,400,50,50);
            circle(100, 400, 50);

            setfillstyle(SOLID_FILL, LIGHTGRAY);
            fillellipse(100,400,45,45);
            circle(100,400, 45);
        }

        {//THING
            rectangle(200,150,250,405);
            int poly18[8];
            poly18[0] = 200;
            poly18[1] = 150;

            poly18[2] = 250;
            poly18[3] = 150;

            poly18[4] = 250;
            poly18[5] = 405;

            poly18[6] = 200;
            poly18[7] = 405;
            setfillstyle(SOLID_FILL,GREEN);
            fillpoly(4,poly18);
            rectangle(200,175,190,200);
            int poly19[8];
            poly18[0] = 200;
            poly18[1] = 175;
            poly18[2] = 190;
            poly18[3] = 175;
            poly18[4] = 190;
            poly18[5] = 200;
            poly18[6] = 200;
            poly18[7] = 200;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(190,220,200,245);
            int poly20[8];
            poly18[0] = 190;
            poly18[1] = 220;
            poly18[2] = 200;
            poly18[3] = 220;
            poly18[4] = 200;
            poly18[5] = 245;
            poly18[6] = 190;
            poly18[7] = 245;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(190,265,200,290);
            int poly21[8];
            poly18[0] = 190;
            poly18[1] = 265;
            poly18[2] = 200;
            poly18[3] = 265;
            poly18[4] = 200;
            poly18[5] = 290;
            poly18[6] = 190;
            poly18[7] = 290;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(190,310,200,335);
            int poly22[8];
            poly18[0] = 190;
            poly18[1] = 310;
            poly18[2] = 200;
            poly18[3] = 310;
            poly18[4] = 200;
            poly18[5] = 335;
            poly18[6] = 190;
            poly18[7] = 335;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(190,355,200,380);
            int poly23[8];
            poly23[0] = 190;
            poly23[1] = 355;
            poly23[2] = 200;
            poly23[3] = 355;
            poly23[4] = 200;
            poly23[5] = 380;
            poly23[6] = 190;
            poly23[7] = 380;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly23);
            rectangle(250,175,260,200);
            int poly24[8];
            poly18[0] = 250;
            poly18[1] = 175;
            poly18[2] = 260;
            poly18[3] = 175;
            poly18[4] = 260;
            poly18[5] = 200;
            poly18[6] = 250;
            poly18[7] = 200;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(250,220,260,245);
            int poly25[8];
            poly18[0] = 250;
            poly18[1] = 220;
            poly18[2] = 260;
            poly18[3] = 220;
            poly18[4] = 260;
            poly18[5] = 245;
            poly18[6] = 250;
            poly18[7] = 245;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(250,265,260,290);
            int poly26[8];
            poly18[0] = 250;
            poly18[1] = 265;
            poly18[2] = 260;
            poly18[3] = 265;
            poly18[4] = 260;
            poly18[5] = 290;
            poly18[6] = 250;
            poly18[7] = 290;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(250,310,260,335);
            int poly27[8];
            poly18[0] = 250;
            poly18[1] = 310;
            poly18[2] = 260;
            poly18[3] = 310;
            poly18[4] = 260;
            poly18[5] = 335;
            poly18[6] = 250;
            poly18[7] = 335;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
            rectangle(250,355,260,380);
            int poly28[8];
            poly18[0] = 250;
            poly18[1] = 355;
            poly18[2] = 260;
            poly18[3] = 355;
            poly18[4] = 260;
            poly18[5] = 380;
            poly18[6] = 250;
            poly18[7] = 380;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly18);
        }

        {//CHIP
            rectangle(30,510, 80, 560);
            int poly29[8];
            poly29[0] = 30;
            poly29[1] = 510;
            poly29[2] = 80;
            poly29[3] = 510;
            poly29[4] = 80;
            poly29[5] = 560;
            poly29[6] = 30;
            poly29[7] = 560;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly29);
        }

        {//CHIPSET
            rectangle(450,250,350,350);
            int poly30[8];
            poly30[0] = 450;
            poly30[1] = 250;
            poly30[2] = 350;
            poly30[3] = 250;
            poly30[4] = 350;
            poly30[5] = 350;
            poly30[6] = 450;
            poly30[7] = 350;
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(4,poly30);
        }

        {//ELECTRON_MOVEMENT
            setcolor(RED);
            setfillstyle(SOLID_FILL,RED);

            if(i>=0 && i<=6)  //START
                {

                fillellipse(500, 50+10*i,7,7);
                circle(500,50+10*i,5);
                delay(50);

                }
            else if (i>=6 && i<=30)
                {
                fillellipse(440+10*i,110,7,7);
                circle(440+10*i,110,5);
                delay(50);

                }
            else if(i>30 && i<=45)
                {
                fillellipse(740,-190+10*i,7,7);
                circle(740, -190+10*i, 5);
                delay(50);

                }
            else if(i>45 && i<=50)
                {
                fillellipse(1200-10*i,260,7,7);
                circle(1200-10*i,260,5);
                delay(50);

                }
            else if(i>50 && i<=55)
                {
                fillellipse(190+10*i,310,7,7);
                circle(190+10*i,310, 5);
                delay(50);

                }
            else if(i>55 && i<=71)
                {
                fillellipse(740, -250+10*i,7,7);
                circle(740, -250+10*i, 5);
                delay(50);

                }
            else if(i>71 && i<=75)
                {
                fillellipse(1450-10*i,460,7,7);
                circle(1450-10*i,460, 5);
                delay(50);

                }
            else if(i>75 && i<=80)
                {
                fillellipse(1160-10*i, 500,7,7);
                circle(1160-10*i, 500, 5);
                delay(50);

                }
            else if(i>80 && i<=85)
                {
                fillellipse(360, -300+10*i,7,7);
                circle(360, -300+10*i, 5);
                delay(50);

                }
            else if(i>85 && i<=101)
                {
                fillellipse(1210-10*i,550,7,7);
                circle(1210-10*i,550,5);
                delay(50);
                }
        }

        swapbuffers();
        clearviewport();

    }//END OF FOR LOOP

   delay(300);
}

void hd()  //Scene with hard drive
{
   for(int i = 0; i < 750; ++i)  //Animation requires a loop.
   {
      setfillstyle(SOLID_FILL,BLACK);
      fillellipse(400,300,1000,1000);

      int poly2[10];
      poly2[0] = 100;
      poly2[1] = 100;
      poly2[2] = 700;
      poly2[3] = 100;
      poly2[4] = 700;
      poly2[5] = 500;
      poly2[6] = 100;
      poly2[7] = 500;
      poly2[8] = poly2[0];
      poly2[9] = poly2[1];
      setfillstyle(SOLID_FILL,DARKGRAY);
      fillpoly(5, poly2);

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

      setcolor(LIGHTGRAY);
      rectangle (70,120,100,200);
      rectangle (0,150,70,170);

      line(100,150,160,150);
      line(160,150,160,220);
      line(160,220,210,220);

      line(100,170,140,170);
      line(140,170,140,240);
      line(140,240,210,240);

      setcolor(BLACK);
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

      setcolor(RED); //this is signal/electron guy
      setfillstyle(SOLID_FILL,RED);
      if(i>=0&&i<=151)
      fillellipse(0+i,160,10,10);
      else if(i>=151&&i<=221)
      fillellipse(151,9+i,10,10);
      else if(i>=221&&i<=290)
      fillellipse(-70+i,230,10,10);
      else if(i>=290&&i<=520)
      fillellipse(220-290+i,230-.7*290+.7*i,10,10);
      else if(i>=520&&i<=750)
      {
          arc(500,300,220+100*i,300+100*i,102);
          arc(500,300,220+100*i,300+100*i,101);
          arc(500,300,220+100*i,300+100*i,100);
          arc(500,300,220+100*i,300+100*i,99);
          arc(500,300,220+100*i,300+100*i,98);
          arc(500,300,220+100*i,300+100*i,97);
          arc(500,300,220+100*i,300+100*i,96);
          arc(500,300,220+100*i,300+100*i,95);
          arc(500,300,220+100*i,300+100*i,94);
          arc(500,300,220+100*i,300+100*i,93);
          arc(500,300,220+100*i,300+100*i,92);
      }

      swapbuffers();   //Swap the memory buffers.
      clearviewport(); //Erase the active page before writing to it.
      delay(3);       //Pause the loop to slow the animation slightly.
    }
}

void screen_end()  //Final scene with computer monitor and explosion
{
    setcolor(WHITE);
    rectangle (0,800,0,600);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill (775,555,WHITE);

    setcolor (BLACK); // outline of outer rectangle
    rectangle (100,140,690,450);

    //Outer rectangle
    int poly1[8];
    poly1[0]=100;
    poly1[1]=140;
    poly1[2]=690;
    poly1[3]=140;
    poly1[4]=690;
    poly1[5]=450;
    poly1[6]=100;
    poly1[7]=450;

    setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(4,poly1);

    setcolor(BLACK);  //outline of inner rectangle
    rectangle (120,160,670,430);

    //Inner rectangle
    int poly2[8];
    poly1[0]=120;
    poly1[1]=160;
    poly1[2]=670;
    poly1[3]=160;
    poly1[4]=670;
    poly1[5]=430;
    poly1[6]=120;
    poly1[7]=430;

    setfillstyle(SOLID_FILL,BLACK);
    fillpoly(4,poly1);

    settextstyle(9,0,1);
    setcolor(WHITE);
    outtextxy(359,431,"DELL"); //displays the brand of the screen

    //outline of table
    setcolor(BLACK);
    int poly3[8];
    poly3[0] = 0;
    poly3[1] = 480;
    poly3[2] = 800;
    poly3[3] = 480;
    poly3[4] = 800;
    poly3[5] = 600;
    poly3[6] = 0;
    poly3[7] = 600;
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(4, poly3);

    //outline of stand
    setcolor(BLACK);
    poly2[0] = 330;
    poly2[1] = 450;
    poly2[2] = 450;
    poly2[3] = 450;
    poly2[4] = 450;
    poly2[5] = 500;
    poly2[6] = 330;
    poly2[7] = 500;
    setfillstyle(SOLID_FILL,BLACK);
    fillpoly(4, poly2);

    settextstyle(BOLD_FONT, HORIZ_DIR, 1);
    setcolor(WHITE);
    outtextxy(150,190,">> A fatal error has occurred");

    setcolor(BLACK);       //outline of keyboard
    rectangle(230,530,550,580);
    setfillstyle(LINE_FILL,WHITE);
    floodfill(545,565,BLACK);

    setfillstyle(SOLID_FILL,BLACK);  //Mouse
    fillellipse(650,550,15,25);

    delay(2000);

    setcolor(BLUE);//coutline of inner rectangle
    rectangle (120,160,670,430);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(450,400,BLUE);

    delay (1000);

    {//Explosion
      setcolor(RED);
      int poly[8];
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 120;
      poly[3] = 320;
      poly[4] = 300;
      poly[5] = 200;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 120;
      poly[3] = 360;
      poly[4] = 300;
      poly[5] = 200;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 120;
      poly[3] = 280;
      poly[4] = 300;
      poly[5] = 200;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 120;
      poly[3] = 240;
      poly[4] = 300;
      poly[5] = 200;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 120;
      poly[3] = 200;
      poly[4] = 300;
      poly[5] = 200;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 120;
      poly[3] = 160;
      poly[4] = 300;
      poly[5] = 200;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);

      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 120;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 200;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 240;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 300;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 360;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 400;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 450;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 500;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 550;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 600;
      poly[3] = 430;
      poly[4] = 300;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 670;
      poly[3] = 430;
      poly[4] = 260;
      poly[5] = 220;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 670;
      poly[3] = 430;
      poly[4] = 430;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);


      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 670;
      poly[3] = 430;
      poly[4] = 500;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

       setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 670;
      poly[3] = 260;
      poly[4] = 550;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 670;
      poly[3] = 360;
      poly[4] = 600;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 670;
      poly[3] = 200;
      poly[4] = 670;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 450;
      poly[3] = 210;
      poly[4] = 350;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

     setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 400;
      poly[3] = 250;
      poly[4] = 400;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 310;
      poly[2] = 450;
      poly[3] = 250;
      poly[4] = 280;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 470;
      poly[1] = 350;
      poly[2] = 470;
      poly[3] = 250;
      poly[4] = 280;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      setcolor(RED);
      poly[0] = 450;
      poly[1] = 370;
      poly[2] = 470;
      poly[3] = 250;
      poly[4] = 200;
      poly[5] = 160;
      poly[6] = poly[0];
      poly[7] = poly[1];
      setfillstyle(SOLID_FILL,RED);
      fillpoly(4, poly);

      settextstyle(1,0,5);
      setcolor(WHITE);
      outtextxy(320,280,"BANG");
    }

    delay(1000);       //Pause the loop to slow the animation slightly.
    clearviewport();
}

void credits()  //End credits
{
    int maxx,maxy;

    maxx = getwindowwidth( )/2;
    maxy = getwindowheight( )/2;

    for(int i=700; i>=-550; i--)  //Main animation loop
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

        settextstyle(BOLD_FONT, HORIZ_DIR, 4);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        outtextxy(maxx,i+450,"Secretary - Caleb Rexin");
    }
}

int main()  //Main function of program that calls individual animated scenes in sequence
{
    initwindow(800, 600);    //Open a window to draw in.
    screen_start();
    mouse();
    initwindow(800,600);
    tower();
    mobo();
    hd();
    initwindow(800,600);
    screen_end();
    credits();

    closegraph();  //Closes the graphical window
    return 0;
}
