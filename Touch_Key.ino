// #include "UsbKeyboard.h"
int InData1 = 0, InData2 = 0, InData3 = 0, InData4 = 0, InData5 = 0, InData0 = 0;  //触摸输入值暂存
int TouchSensitivity = 30; //触摸灵敏度。0~1023，越大越不灵敏
void setup()
{
  for(int i = A0; i <= A5; i++)
    {
      pinMode(i, INPUT);                        //A0~A5端设置为输入
    }
  
  for(int i = 6; i <= 12; i++)
    {
      pinMode(i, OUTPUT);                        //A0~A5端设置为输入
    }
  
  TIMSK0 &= !(1 << TOIE0);
}
 
void loop()
{
//  UsbKeyboard.update();
  //读取所有引脚电压值，并且由于上拉电阻原因，
  //默认所有引脚为最高电平1023，通过触摸拉低引脚电平。
  //所以数值由1024-analogRead(A0);
  InData0 = 1024 - analogRead(A0);                
  InData1 = 1024 - analogRead(A1);
  InData2 = 1024 - analogRead(A2);
  InData3 = 1024 - analogRead(A3);
  InData4 = 1024 - analogRead(A4);
  InData5 = 1024 - analogRead(A5);
  //按照各种可能触发键盘事件
  if(InData0 >= TouchSensitivity)
   {
    digitalWrite(6, HIGH);             
//    UsbKeyboard.sendKeyStroke(79); //right
   }
   else digitalWrite(6, LOW);
   
  if(InData1 >= TouchSensitivity)
   {
    digitalWrite(7, HIGH); 
//    UsbKeyboard.sendKeyStroke(80);  //left
   }
     else digitalWrite(7, LOW);
     
  if(InData2 >= TouchSensitivity)
   {
    digitalWrite(8, HIGH); 
//    UsbKeyboard.sendKeyStroke(81);  //down
   }
     else digitalWrite(8, LOW);
     
  if(InData3 >= TouchSensitivity)
   {
    digitalWrite(9, HIGH); 
//    UsbKeyboard.sendKeyStroke(82);  //up
   }
     else digitalWrite(9, LOW);
     
  if(InData4 >= TouchSensitivity)
   {
    digitalWrite(10, HIGH); 
//    UsbKeyboard.sendKeyStroke(KEY_SPACE);
   }
      else digitalWrite(10, LOW);
      
  if(InData5 >= TouchSensitivity)
   {
    digitalWrite(11, HIGH); 
//    UsbKeyboard.sendKeyStroke(KEY_ENTER);
   }
      else digitalWrite(11, LOW);
  delay(100);
}
