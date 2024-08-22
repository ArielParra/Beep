#include "Beep.h"
// code from: https://github.com/n3m351d4/SongsForBeeper/blob/master/Star_Wars.ino
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

void firstSection();
void secondSection();

int main() {
 
  //Play first section
  firstSection();
 
  //Play second section
  secondSection();
 
  //Variant 1
  Beep(f, 250);  
  Beep(gS, 500);  
  Beep(f, 350);  
  Beep(a, 125);
  Beep(cH, 500);
  Beep(a, 375);  
  Beep(cH, 125);
  Beep(eH, 650);
 
  Sleep(500);
 
  //Repeat second section
  secondSection();
 
  //Variant 2
  Beep(f, 250);  
  Beep(gS, 500);  
  Beep(f, 375);  
  Beep(cH, 125);
  Beep(a, 500);  
  Beep(f, 375);  
  Beep(cH, 125);
  Beep(a, 650);  
 
  Sleep(650);
  return 0;
}
 

 
void firstSection()
{
  Beep(a, 500);
  Beep(a, 500);    
  Beep(a, 500);
  Beep(f, 350);
  Beep(cH, 150);  
  Beep(a, 500);
  Beep(f, 350);
  Beep(cH, 150);
  Beep(a, 650);
 
  Sleep(500);
 
  Beep(eH, 500);
  Beep(eH, 500);
  Beep(eH, 500);  
  Beep(fH, 350);
  Beep(cH, 150);
  Beep(gS, 500);
  Beep(f, 350);
  Beep(cH, 150);
  Beep(a, 650);
 
  Sleep(500);
}
 
void secondSection()
{
  Beep(aH, 500);
  Beep(a, 300);
  Beep(a, 150);
  Beep(aH, 500);
  Beep(gSH, 325);
  Beep(gH, 175);
  Beep(fSH, 125);
  Beep(fH, 125);    
  Beep(fSH, 250);
 
  Sleep(325);
 
  Beep(aS, 250);
  Beep(dSH, 500);
  Beep(dH, 325);  
  Beep(cSH, 175);  
  Beep(cH, 125);  
  Beep(b, 125);  
  Beep(cH, 250);  
 
  Sleep(350);
}