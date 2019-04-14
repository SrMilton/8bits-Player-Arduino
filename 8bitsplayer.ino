int confirm = 1;
int beepp = 2;
int next = 3;
int songnum = 1;
int ledg = 5;
int ledr = 4;

//==================================================
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;
//===================================================

#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 9, 8, 7, 6);

void setup() {
pinMode(ledr, OUTPUT);
pinMode(ledg, OUTPUT);
pinMode(confirm, INPUT);
pinMode(next, INPUT);
lcd.begin(16, 2);
}
//===========================================
void loop() {
lcd.clear();
lcd.setCursor(2, 0);
lcd.print("8Bits Player");
lcd.setCursor(2, 1);
lcd.print("By: Milton M.");
beep(a, 50);
digitalWrite(ledr, HIGH);
digitalWrite(ledg, HIGH);
delay(5000);
tela();
}
//===========================================
void player()
{
  digitalWrite(ledr, HIGH);
  digitalWrite(ledg, LOW);
  if(digitalRead(next) == HIGH)
  {
    delay(100);
    songnum++;
  if(songnum > 3)
  {
    songnum = 1;
  }
    tela();
  }

    if(digitalRead(confirm) == HIGH)
  {
    delay(50);
  digitalWrite(ledr, LOW);
  digitalWrite(ledg, HIGH);
    if(songnum == 1)
    {
      music1();
    }
    if(songnum == 2)
    {
      music2();
    }
    if(songnum == 3)
    {
      music3();
    }
  }
  player();
}
//===========================================
void tela()
{
  
  lcd.clear();
  lcd.setCursor(0, 0);
  if(songnum == 1)
  {
  lcd.print("Star Wars Song");
  lcd.setCursor(0, 1);
  lcd.print("1/3");
  }
  if(songnum == 2)
  {
  lcd.print("All Star");
  lcd.setCursor(0, 1);
  lcd.print("2/3");
  }
    if(songnum == 3)
  {
  lcd.print("Super Mario Song");
  lcd.setCursor(0, 1);
  lcd.print("3/3");
  }
  delay(80);
  player();
 // music1();
}

//========================================
void beep(int note, int duration)
{
   
  tone(beepp, note, duration);

    if(digitalRead(next) == HIGH)
  {
    noTone(beepp);
    delay(50);
    player();
  }
  
  delay(duration);

  
}
//======================================

void music1()
{
  beep(a, 500);
  beep(a, 500);    
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);  
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);
 
  delay(500);
 
  beep(eH, 500);
  beep(eH, 500);
  beep(eH, 500);  
  beep(fH, 350);
  beep(cH, 150);
  beep(gS, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);

  beep(aH, 500);
  beep(a, 300);
  beep(a, 150);
  beep(aH, 500);
  beep(gSH, 325);
  beep(gH, 175);
  beep(fSH, 125);
  beep(fH, 125);    
  beep(fSH, 250);
 
  delay(325);
 
  beep(aS, 250);
  beep(dSH, 500);
  beep(dH, 325);  
  beep(cSH, 175);  
  beep(cH, 125);  
  beep(b, 125);  
  beep(cH, 250);  
 
delay(350);

  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 650); 
  
  player();
}

void music2()
{
beep(370,600);

beep(554,300);

beep(466,300);

beep(466,600);

beep(415,300);

beep(370,300);

beep(370,300);

beep(494,600);//B

beep(466,300);

beep(466,300);

beep(415,300);

beep(415,300);

beep(370,600);

beep(370,300);

beep(554,300);

beep(466,300);

beep(466,600);

beep(415,300);

beep(370,300);

beep(370,300);

beep(311,600);

beep(277,900);

beep(370,300);

beep(370,300);

beep(554,300);

beep(466,300);//A#4

beep(466,300);//A#4

beep(415,300);//G#4

beep(415,300);//G#4

beep(369,300);//F#4

beep(369,300);//F#4

beep(494,600);//B4

beep(466,300);//A#4

beep(466,300);//A#4

beep(415,300);//G#4

beep(415,300);//G#4

beep(369,300);//F#4

beep(369,300);//F#4

beep(554,600);//C#5

beep(466,300);//A#4

beep(466,300);//A#4

beep(415,600);//G#4

beep(369,300);//F#4

beep(369,300);//F#4

beep(415,600);//G#4

beep(311,900);//D#4

beep(369,450);//F#4

beep(311,150);//D#4

beep(369,300);//F#4

beep(369,300);//F#4

beep(369,150);//F#4

beep(369,150);//F#4

beep(311,150);//D#4

beep(277,150);//C#4

beep(369,300);//F#4

beep(369,300);//F#4

beep(369,150);//F#4

beep(369,150);//F#4

beep(369,300);//F#4

beep(369,150);//F#4

beep(369,150);//F#4

beep(369,300);//F#4

beep(369,150);//F#4

beep(369,150);//F#4

beep(369,150);//F#4

beep(369,150);//F#4

beep(369,300);//F#4

beep(466,150);//A#4

beep(369,450);//F#4

beep(466,150);//A#4

beep(466,150);//A#4

beep(554,300);//C#5

beep(494,300);//B4

beep(466,150);//A#4

beep(369,150);//F#4

beep(415,300);//G#4

beep(415,300);//G#4

beep(415,450);//G#4

beep(415,150);//G#4

beep(466,300);//A#4


beep(369,300);//F#4


beep(369,300);//F#4


beep(311,150);//D#4


beep(277,150);//C#4


beep(369,300);//F#4


beep(369,300);//F#4


beep(369,300);//F#4


beep(466,150);//A#4


beep(554,300);//C#5


beep(466,150);//A#4


beep(622,300);//D#5


beep(466,150);//A#4


beep(554,300);//C#5


beep(466,150);//A#4


beep(622,300);//D#5


beep(466,150);//A#4


beep(554,300);//C#5


beep(494,300);//B4


beep(466,300);//A#4


beep(415,300);//G#4


beep(369,300);//F#4


beep(369,150);//F#4


beep(415,300);//G#4


beep(369,600);//F#4
delay(150);

beep(369,150);//F#4


beep(369,150);//F#4


beep(369,150);//F#4


beep(369,300);//F#4


beep(369,150);//F#4


beep(369,150);//F#4


beep(369,300);//F#4


beep(369,600);//F#4
delay(300);

beep(369,150);//F#4


beep(369,150);//F#4


beep(466,150);//A#4


beep(369,150);//F#4


beep(369,300);//F#4


beep(369,150);//F#4


beep(311,150);//D#4


beep(311,300);//D#4


beep(311,600);//D#4
delay(600);

//chorus

beep(466,300);//A#4


beep(369,600);//F#4


beep(369,150);//F#4


beep(311,150);//D#4


beep(369,300);//F#4


beep(369,600);//F#4


beep(369,150);//F#4


beep(311,150);//D#4


beep(369,300);//F#4


beep(369,600);//F#4


beep(369,600);//F#4


beep(466,900);//A#4

beep(466,300);//A#4


beep(369,600);//F#4


beep(369,150);//F#4


beep(311,150);//D#4


beep(369,300);//F#4


beep(369,600);//F#4


beep(369,150);//F#4


beep(311,150);//D#4


beep(369,300);//F#4


beep(369,600);//F#4


beep(369,600);//F#4


beep(466,600);//A#4


beep(369,300);//F#4


beep(466,600);//A#4


beep(554,600);//C#5


beep(494,300);//B4


beep(554,300);//C#5


beep(622,300);//D#5


beep(740,600);//F#5


beep(831,300);//G#5


beep(740,600);//F#5


beep(369,300);//F#4

beep(369,300);//F#4

beep(415,300);//G#4

beep(369,300);//F#4

beep(466,300);//A#4

beep(415,600);//G#4

beep(415,600);//G#4

beep(369,600);//F#4

beep(415,600);//G#4

beep(311,1800);//D#4


 player();
}

void music3()
{
beep(660,100);
delay(50);
beep(660,100);
delay(200);
beep(660,100);
delay(200);
beep(510,100);
beep(660,100);
delay(200);
beep(770,100);
delay(450);
beep(380,100);
delay(475);

beep(510,100);
delay(350);
beep(380,100);
delay(300);
beep(320,100);
delay(400);
beep(440,100);
delay(200);
beep(480,80);
delay(250);
beep(450,100);
delay(50);
beep(430,100);
delay(200);
beep(380,100);
delay(100);
beep(660,80);
delay(120);
beep(760,50);
delay(50);
beep(860,100);
delay(200);
beep(700,80);
delay(70);
beep(760,50);
delay(300);
beep(660,80);
delay(140);
beep(520,80);
delay(70);
beep(580,80);
delay(70);
beep(480,80);
delay(420);

beep(510,100);
delay(350);
beep(380,100);
delay(300);
beep(320,100);
delay(400);
beep(440,100);
delay(200);
beep(480,80);
delay(250);
beep(450,100);
delay(50);
beep(430,100);
delay(200);
beep(380,100);
delay(100);
beep(660,80);
delay(120);
beep(760,50);
delay(50);
beep(860,100);
delay(200);
beep(700,80);
delay(70);
beep(760,50);
delay(300);
beep(660,80);
delay(220);
beep(520,80);
delay(150);
beep(580,80);
delay(70);
beep(480,80);
delay(420);

beep(500,100);
delay(200);//

beep(760,100);
beep(720,100);
delay(50);
beep(680,100);
delay(100);
beep(620,150);
delay(150);

beep(650,150);
delay(150);
beep(380,100);
delay(50);
beep(430,100);
delay(50);

beep(500,100);
delay(200);
beep(430,100);
delay(50);
beep(500,100);
beep(570,100);
delay(120);

beep(500,100);
delay(200);

beep(760,100);
beep(720,100);
delay(50);
beep(680,100);
delay(50);
beep(620,150);
delay(150);

beep(650,200);
delay(200);

beep(1020,80);
delay(220);
beep(1020,80);
delay(70);
beep(1020,80);
delay(220);

beep(380,100);
delay(200);
beep(500,100);
delay(200);

beep(760,100);
beep(720,100);
delay(50);
beep(680,100);
delay(50);
beep(620,150);
delay(150);

beep(650,150);
delay(150);
beep(380,100);
delay(50);
beep(430,100);
delay(50);
//
beep(500,100);
delay(200);
beep(430,100);
delay(50);
beep(500,100);
beep(570,100);
delay(320);

beep(585,100);
delay(350);

beep(550,100);
delay(320);

beep(500,100);
delay(260);

beep(380,100);
delay(200);
beep(500,100);
delay(200);
beep(500,100);
delay(50);
beep(500,100);
delay(200);

beep(500,100);
delay(200);

beep(760,100);
beep(720,100);
delay(50);
beep(680,100);
delay(50);
beep(620,150);
delay(200);

beep(650,150);
delay(150);
beep(380,100);
delay(50);
beep(430,100);
delay(50);

beep(500,100);
delay(200);
beep(430,100);
delay(50);
beep(500,100);
beep(570,100);
delay(120);

beep(500,100);
delay(200);

beep(760,100);
beep(720,100);
delay(50);
beep(680,100);
delay(50);
beep(620,150);
delay(150);

beep(650,200);
delay(200);

beep(1020,80);
delay(220);
beep(1020,80);
delay(70);
beep(1020,80);
delay(220);

beep(380,100);
delay(100);
beep(500,100);
delay(010);
//
beep(760,100);
beep(720,100);
delay(50);
beep(680,100);
delay(50);
beep(620,150);
delay(200);

beep(650,150);
delay(150);
beep(380,100);
delay(50);
beep(430,100);
delay(50);

beep(500,100);
delay(200);
beep(430,100);
delay(50);
beep(500,100);
beep(570,100);
delay(320);

beep(585,100);
delay(350);

beep(550,100);
delay(320);

beep(500,100);
delay(260);

beep(380,100);
delay(200);
beep(500,100);
delay(200);
beep(500,100);
delay(50);
beep(500,100);
delay(200);

beep(500,60);
delay(90);
beep(500,80);
delay(220);
beep(500,60);
delay(290);
beep(500,80);
delay(70);
beep(580,80);
delay(220);
beep(660,80);
delay(70);
beep(500,80);
delay(220);
beep(430,80);
delay(70);
beep(380,80);
delay(520);
//
beep(500,60);
delay(90);
beep(500,80);
delay(220);
beep(500,60);
delay(290);
beep(500,80);
delay(70);
beep(580,80);
delay(70);
beep(660,80);
delay(470);

beep(870,80);
delay(245);
beep(760,80);
delay(520);

beep(500,60);
delay(70);
beep(500,80);
delay(220);
beep(500,60);
delay(290);
beep(500,80);
delay(70);
beep(580,80);
delay(220);
beep(660,80);
delay(70);
beep(500,80);
delay(220);
beep(430,80);
delay(70);
beep(380,80);
delay(520);

beep(660,100);
delay(50);
beep(660,100);
delay(200);
beep(660,100);
delay(200);
beep(510,100);
beep(660,100);
delay(200);
beep(770,100);
delay(450);
beep(380,100);
delay(475);

player();
}
