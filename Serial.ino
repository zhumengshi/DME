/**********************数据写入软件串口*****************************************/
void write_serial_data(){
  String dis = String(distance*10);
  char dis_byte[8];             //写入8位数据
  dis.toCharArray(dis_byte,8); 
  mySerial.write("distance: ");
  mySerial.write(dis_byte);
  mySerial.write("mm                                                ");
  }
/******************命令写入软件串口****************************************/
void write_serial_command(){
  if(distance<100&&distance>50)
  {
    mySerial.write("------------Warning!------------");
  }
  delay(1000);
  }
