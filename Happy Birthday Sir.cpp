#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
int x,y;
void fillc(int,int);
void cse4()
{
    line(200,385,600,385);
    settextstyle(8,0,2);
    //outtextxy(380,410,"From all the students of");
    outtextxy(210,410,"Computer science & engineering");
    outtextxy(330,440,"2015-18");
    outtextxy(330,470,"5th sem");
    setlinestyle(0,0,2);
    line(200,385,150,500);
    line(600,385,650,500);
}
void sutter()
{
    int i,j=1,k;
     k=y/5;
  setlinestyle(0,0,7);
      for(i=0;i<y/5;i++)
    {
        setcolor(GREEN);
        line(0,j+i,x,j+i);
        setcolor(BLUE);
        line(0,j+k+i,x,j+k+i);
        setcolor(YELLOW);
        line(0,j+2*k+i,x,j+2*k+i);
        setcolor(RED);
        line(0,j+3*k+i,x,j+3*k+i);
        setcolor(CYAN);
        line(0,j+4*k+i,x,j+4*k+i);
        delay(30);
    }

}
void aeronspire(int p,int q)
{
    char str[15]="HAPPYBIRTHDAY",str1[2],str2[15];
    str[14]='\0';
    int i,j,d;
    settextstyle(COMPLEX_FONT,HORIZ_DIR,9);
   for(i=0;i<13;i++)
    {
        d=0;
        setcolor(i+1);
     setlinestyle(0,0,5);
        str1[0]=str[i];
        str1[1]='\0';
        str2[i]='\0';
        for(j=0;j<(y/2);j++)
        {
            if(j%40==0)
                d++;
             delay(d);
             cleardevice();
             outtextxy(p,q+j,str1);
             line(p+30,0,p+30,20+q+j);
          //  ellipse(p+30,q+j,180,0,10,20);

            if(j==((y/2)-1))
            str2[i]=str[i];
            outtextxy(0,(y/2)-20,str2);

        }
        p=p+60;
    }
    cleardevice();
    outtextxy(0,(y/2)-20,str);
    int m=0;
    int n=15;
    for(j=0;j<x;j++)
    {
        setcolor(YELLOW);
        line(0,(y/2)+60,0+j,(y/2)+60);
          line(0,(y/2)+61,0+j,(y/2)+61);
            line(0,(y/2)+62,0+j,(y/2)+62);
            line(x,(y/2)-5,x-j,(y/2)-5);
              line(x,(y/2)-6,x-j,(y/2)-6);
                line(x,(y/2)-7,x-j,(y/2)-7);
                if(j%5==0)
               {
                  fillc(m,n);
                m++;
                n--;
               }
        delay(10);
    }
}
void fillc(int i,int j)
{
      //setcolor(YELLOW);

   // for(i=1;i<80;i++)
    {  if(j%15==0)
        {  setcolor(j);
           j--;
        }
        circle(550,100,i);
        circle(150,100,i);
        delay(50);
    }
}
void htd()
{

}
void effect()
{

}
main()
{
    int i,j;
     initwindow(800,500,"powered by deepak yadav",0,0,false,true);
     x=800;
     y=500;
     j=15;
    // outtextxy(100,100,"PLEASE PRESS ENTER");

   /* outtextxy(100,100,"P l e a s e    P r e s s    E N T E R");
     getch();
      sutter();
     for(i=0;i<400;i=i+2)
     {
         if(j==0)
            j=15;
         if(i%15==0)
        {  setcolor(j);
           j--;
        }
        cleardevice();
        cse4();
        outtextxy(240,390,"From all the students of");
        setlinestyle(0,0,2);
        line(0,0,80,-75+i);
        line(800,0,730,-75+i);
        line(0,0,80,-14+i);
        line(800,0,730,-14+i);
        setlinestyle(0,0,6);

        rectangle(80,-75+i,730,-15+i);
         settextstyle(8,0,6);
         outtextxy(90,-70+i,"HAPPY BIRTHDAY SIR");
         delay(40);
     }
     getch();

     settextstyle(8,0,2);
     setcolor(BLUE);
     outtextxy(50,10," In everyone’s life there is one teacher whose  ");
     outtextxy(80,50,"  words remain engraved in the heart and soul  ");
     outtextxy(110,90," for a lifetime. For me, it’s you.  ");
     outtextxy(250,130," Happy birthday. ...");
     getch();

     setcolor(YELLOW);
     outtextxy(100,170,"Dear teacher… to show how you have changed my entire");
     outtextxy(110,210,"life’s view,I want to say that when I grow up");
     outtextxy(120,250,"I want to be just like you. Happy birthday.");
     getch();
     sutter();
     cleardevice();
     aeronspire(0,0);*/
     j=15;
     for(i=0;i>=0;i=i+5)
     {
         cleardevice();
         settextstyle(7,0,4);
         setcolor(YELLOW);
         outtextxy(50,10,"We are so lucky to have a teacher ");
         outtextxy(150,40,"as wonderful as you are.");
         outtextxy(50,70,"wishing you a very happy birthday dear sir.. ");
         setlinestyle(0,0,5);
         setcolor(j);
         if(j==0)
            j=15;
         if(i%50==0)
        {  setcolor(j);
           j--;
        }
         rectangle(-770+i,190,20+i,270);
         settextstyle(8,0,7);
        // circle(200,200,40);
         outtextxy(-750+i,200,"HAPPY BIRTHDAY SIR");
         setcolor(GREEN);
         cse4();
         delay(30);
         if(i==1600)
            i=0;
     }
     getch();
     return 0;
}
