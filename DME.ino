/*************************引入库****************************************/
#include <U8glib.h>
#include <SoftwareSerial.h>
/**************************端口定义*****************************************/
const int TrigPin = 5;
const int EchoPin = 6;
/*************************创建对象****************************************/
SoftwareSerial mySerial(8, 7); // RX, TX  通过软串口连接esp8266
U8GLIB_SSD1306_128X32 u8g(U8G_I2C_OPT_NONE);
/*************************全局变量*****************************************/
float distance;
/*************************函数声明*****************************************/
void IO_setup(void);
void u8g_setup(void);
void AT_setup(void);
void ultasonic(void);
void write_serial_data(void);
void write_serial_command(void);
void oled_draw(void);
/*****************程序初始化****************************************/
void setup()                    
{
  IO_setup();
  u8g_setup();
  AT_setup();
}
/****************主循环***************************************/
void loop()                      
{ 
  ultasonic();
  write_serial_data();
  //write_serial_command();
  oled_draw();
}
/*****************************************************************/
