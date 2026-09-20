#include <LiquidCrystal.h> 
LiquidCrystal lcd1(8, 9, 10, 11, 12, 13); 
LiquidCrystal lcd2(6,7,10,11,12,13); 
#define potentiometer A0 
#define temperature A1 
void setup() { 
  lcd1.begin(16, 2); 
  lcd2.begin(16,2); 
  pinMode(potentiometer, INPUT); 
  pinMode(temperature, INPUT);// 16 columns, 2 rows 
  } 
  void loop() { 
    lcd1.setCursor(0, 0); 
    lcd1.print("Temp:"); 
    int temp= (analogRead(temperature) * 40 / 1023); 
    lcd1.print(temp); //temperature is in centigrade
    lcd1.print(" volt:");
    float value=(analogRead(potentiometer)*5)/1023; 
    lcd1.print(value,1); //voltage is in volts
    lcd1.setCursor(0,1); 
    lcd1.print("Curr:"); 
    float current=(analogRead(potentiometer)*20)/1023; 
    lcd1.print(current,1); //current is in ampheres
    float battery_full=5.0; 
    float SOH=(value/battery_full)*100; 
    lcd1.print(" SOH:"); 
    lcd1.print(SOH,1); 
    lcd2.setCursor(0,0); 
    float battery_capacity=20; //battery capacity is in ampherehours
    float remaining_time=battery_capacity/current;//in hours 
    lcd2.print("Time:"); 
    lcd2.print(remaining_time,1); 
    int cycle_count=((100-SOH)/20)*1000; 
    lcd2.print(" cy"); 
    lcd2.print(cycle_count); 
    lcd2.setCursor(0,1); 
    if(SOH<80 || cycle_count>=1000){ 
      lcd2.print("Replace battery"); 
      } 
    else{ 
      lcd2.print("Battery is good");
      } 
      delay(1000); // delay to avoid flicker 
      }