/*************************测距IO初始化*****************************************/
void IO_setup(){
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  }
/*************************超声测距*****************************************/
void ultasonic(){
  // 产生一个10us的高脉冲去触发TrigPin
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  // 检测脉冲宽度，并计算出距离
  distance = pulseIn(EchoPin, HIGH) / 58.00;
  distance = (int(distance * 100.0)) / 100.0; //保留两位小数 
  }

