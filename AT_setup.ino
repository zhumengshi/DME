/*************************AT指令初始化*****************************************/
void AT_setup(){
  mySerial.begin(115200);
  mySerial.println("AT+CWJAP=\"KO.\",\"ooxxooxxooxx\""); //连接wifi，输入帐号和密码
  delay(10000);
  mySerial.println("AT+CIPMODE=1"); //将esp8266设置为station模式
  delay(10000);
  mySerial.println("AT+CIPSTART=\"TCP\",\"192.168.43.1\",5000");  // 连接服务器的5000端口
  delay(10000);
  mySerial.println("AT+CIPSEND"); // 进入TCP透传模式，接下来发送的所有消息都会发送给服务器
  delay(10000);
  }

