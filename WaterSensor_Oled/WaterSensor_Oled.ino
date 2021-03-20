          // کتابخانه های مورد نیاز برای راه اندازی نمایشگر را فراخوانی می کنیم
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

                                  //ابعاد و نوع درایور  نمایشگر را مشخص می کنیم
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);

                                        //پین های مد نظر را در کد تعریف می کنیم
#define SIGNAL_PIN A0

                                           //متغیری برای ذخیره مقادیر بدست آمده
int value = 0; 

void setup() {
  Serial.begin(9600);

                                                        // آدرس دهی به نمایشگر 
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);


  // پاک کردن بافر
  display.display();
  delay(1000);

  display.clearDisplay();
  display.display();
  
  pinMode(POWER_PIN, OUTPUT);   
  digitalWrite(POWER_PIN, LOW); 
}

void loop() {
               
  value = analogRead(SIGNAL_PIN);  // خواندن مقادیر در پین آنالوگ مشخص شده 

  Serial.print("Sensor value: ");
  Serial.println(value);

                                // چاپ مقادیر مورد نیاز در نمایشگر 
  display.setTextSize(1);                      // لندازه فونت نوشته
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);        // مکان دقیق چاپ نوشته در نمایشگر 
  display.print("Water Level:");           // متن مد نظر برای پرینت
  display.setCursor(50,15);
  display.setTextSize(2);
  display.println(value);
  display.display();                                // نمایش مقادیر
  display.clearDisplay();                          // پاک کردن صفحه
  

       if (value >= 50){    // مشخص کردن شرط هایی برای نمایش سطح آب
    display.setTextSize(1);
    display.setCursor(80,0);
    display.print("I");   
  }
      if (value >=150){     
    display.setTextSize(1);
    display.setCursor(80,0);
    display.print("II");   
  }

      if (value >=300){
    display.setTextSize(1);
    display.setCursor(80,0);
    display.print("III");   
  }

      if (value >=500){
    display.setTextSize(1);
    display.setCursor(80,0);
    display.print("IIII");   
  }

      if (value >=520){
    display.setTextSize(1);
    display.setCursor(80,0);
    display.print("IIIII");   
  }

  delay(1000);
}
