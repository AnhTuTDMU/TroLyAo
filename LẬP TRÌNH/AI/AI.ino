int relay2=2;
int relay3=3;
int relay4=4;
int relay5=5;
int relay6=6;
int relay7=7;
int relay8=8;
int relay9=9;
int relay10=10;
int relay11=11;
int relay12=12;
int relay13=13;
int relay14=14;
int relay15=15;
int relay16=16;
int relay17=17;
int relay18=18;
int relay19=19;
int relay20=20;
int relay21=21;
int relay22=22;
int relay24=24;
int relay26=26;
int relay28=28;
int relay30=30;
int relay32=32;
int relay34=34;
void setup()
{
  Serial.begin(9600);
  pinMode(relay2,OUTPUT); digitalWrite(relay2,LOW);
  pinMode(relay3,OUTPUT); digitalWrite(relay3,LOW);
  pinMode(relay4,OUTPUT); digitalWrite(relay4,LOW);
  pinMode(relay5,OUTPUT); digitalWrite(relay5,LOW);
  pinMode(relay6,OUTPUT); digitalWrite(relay6,LOW);
  pinMode(relay7,OUTPUT); digitalWrite(relay7,LOW);
  pinMode(relay8,OUTPUT); digitalWrite(relay8,LOW);
  pinMode(relay9,OUTPUT); digitalWrite(relay9,LOW);
  pinMode(relay10,OUTPUT); digitalWrite(relay10,LOW);
  pinMode(relay11,OUTPUT); digitalWrite(relay11,LOW);
  pinMode(relay12,OUTPUT); digitalWrite(relay12,LOW);
  pinMode(relay13,OUTPUT); digitalWrite(relay13,LOW);
  pinMode(relay14,OUTPUT); digitalWrite(relay14,LOW);
  pinMode(relay15,OUTPUT); digitalWrite(relay15,LOW);
  pinMode(relay16,OUTPUT); digitalWrite(relay16,LOW);
  pinMode(relay17,OUTPUT); digitalWrite(relay17,LOW);
  pinMode(relay18,OUTPUT); digitalWrite(relay18,LOW);
  pinMode(relay19,OUTPUT); digitalWrite(relay19,LOW);
  pinMode(relay20,OUTPUT); digitalWrite(relay20,LOW);
  pinMode(relay21,OUTPUT); digitalWrite(relay21,LOW);
  pinMode(relay22,OUTPUT); digitalWrite(relay22,LOW);
  pinMode(relay24,OUTPUT); digitalWrite(relay24,LOW);
  pinMode(relay26,OUTPUT); digitalWrite(relay26,LOW);
  pinMode(relay28,OUTPUT); digitalWrite(relay28,LOW);
  pinMode(relay30,OUTPUT); digitalWrite(relay30,LOW);
  pinMode(relay32,OUTPUT); digitalWrite(relay32,LOW);
  pinMode(relay34,OUTPUT); digitalWrite(relay34,LOW);
}
void loop()
{
  gapguong();
  nanghakinh();
  chieusangtinhieu();
  khoaig();
}
void gapguong()
{
char a = Serial.read();
if(a == 'M') //Mở gương chiếu hậu
{
  digitalWrite(relay18,HIGH);
  digitalWrite(relay19,HIGH);
  digitalWrite(relay32,LOW);
  digitalWrite(relay34,HIGH);
}
else if(a == 'G') //Gập gương chiếu hậu
{
  digitalWrite(relay32,HIGH);
  digitalWrite(relay34,HIGH);
  digitalWrite(relay18,LOW);
  digitalWrite(relay19,HIGH);
}
else if(a == 'T') //Thoát khỏi chế độ
{
  digitalWrite(relay18,LOW);
  digitalWrite(relay19,LOW);
  digitalWrite(relay32,LOW);
  digitalWrite(relay34,LOW);
}
}
void nanghakinh()
{
char b = Serial.read();
if(b == 'L') //Nâng hết kính bên tài xế
{
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  delay(5500);
  digitalWrite(relay2,LOW);
  digitalWrite(relay3,LOW);
}
else if(b == '1') // Nâng 1/4 kính bên tài xế
{
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  delay(1375);
  digitalWrite(relay2,LOW);
  digitalWrite(relay3,LOW);
}
else if(b == '2') //Nâng 1/2 kính bên tài xế
{
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  delay(2750);
  digitalWrite(relay2,LOW);
  digitalWrite(relay3,LOW);
}
else if(b == '3') //Nâng 3/4 kính bên tài xế
{
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  delay(4125);
  digitalWrite(relay2,LOW);
  digitalWrite(relay3,LOW);
}
if(b == 'l') //Hạ hết kính bên tài xế
{ 
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  delay(5500);
  digitalWrite(relay4,LOW);
  digitalWrite(relay5,LOW);
}
else if(b == '4') //Hạ 1/4 kính bên tài xế
{ 
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  delay(1375);
  digitalWrite(relay4,LOW);
  digitalWrite(relay5,LOW);
}
else if(b == '5') //Hạ 1/2 kính bên tài xế
{ 
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  delay(2750);
  digitalWrite(relay4,LOW);
  digitalWrite(relay5,LOW);
}
else if(b == '6') //Hạ 3/4 kính bên tài xế
{ 
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  delay(4125);
  digitalWrite(relay4,LOW);
  digitalWrite(relay5,LOW);
}
if (b == 'R') //Nâng hết kính bên phụ
{
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  delay(5500);
  digitalWrite(relay6,LOW);
  digitalWrite(relay7,LOW);
}
else if(b == '7') //Nâng 1/4 kính bên phụ
{
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  delay(1375);
  digitalWrite(relay6,LOW);
  digitalWrite(relay7,LOW);
}
else if(b =='8') //Nâng 1/2 kính bên phụ
{
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  delay(2750);
  digitalWrite(relay6,LOW);
  digitalWrite(relay7,LOW);
}
else if(b =='9') //Nâng 3/4 kính bên phụ
{
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  delay(4125);
  digitalWrite(relay6,LOW);
  digitalWrite(relay7,LOW);
}
if(b == 'r') //Hạ hết kính bên phụ
{
  digitalWrite(relay8,HIGH);
  digitalWrite(relay9,HIGH);
  delay(5500);
  digitalWrite(relay8,LOW);
  digitalWrite(relay9,LOW);
}
else if(b == '0') //Hạ 1/4 kính bên phụ
{
  digitalWrite(relay8,HIGH);
  digitalWrite(relay9,HIGH);
  delay(1375);
  digitalWrite(relay8,LOW);
  digitalWrite(relay9,LOW);
}
else if(b == '`') //Hạ 1/2 kính bên phụ
{
  digitalWrite(relay8,HIGH);
  digitalWrite(relay9,HIGH);
  delay(2750);
  digitalWrite(relay8,LOW);
  digitalWrite(relay9,LOW);
}
else if(b == '-') //Hạ 3/4 kính bên phụ
{
  digitalWrite(relay8,HIGH);
  digitalWrite(relay9,HIGH);
  delay(4125);
  digitalWrite(relay8,LOW);
  digitalWrite(relay9,LOW);
}
if(b == 'S') //Nâng hết kính sau tài xế 
{
  digitalWrite(relay10,HIGH);
  digitalWrite(relay11,HIGH);
  delay(5500);
  digitalWrite(relay10,LOW);
  digitalWrite(relay11,LOW);
}
else if(b == '_') //Nâng 1/4 kính sau tài xế
{
  digitalWrite(relay10,HIGH);
  digitalWrite(relay11,HIGH);
  delay(1375);
  digitalWrite(relay10,LOW);
  digitalWrite(relay11,LOW);
}
else if(b == '+') //Nâng 1/2 kính sau tài xế
{
  digitalWrite(relay10,HIGH);
  digitalWrite(relay11,HIGH);
  delay(2750);
  digitalWrite(relay10,LOW);
  digitalWrite(relay11,LOW);
}
else if(b == '=') //Nâng 3/4 kính sau tài xế
{
  digitalWrite(relay10,HIGH);
  digitalWrite(relay11,HIGH);
  delay(4125);
  digitalWrite(relay10,LOW);
  digitalWrite(relay11,LOW);
}
if(b == 's') //Hạ hết kính sau tài xế
{
  digitalWrite(relay12,HIGH);
  digitalWrite(relay13,HIGH);
  delay(5500);
  digitalWrite(relay12,LOW);
  digitalWrite(relay13,LOW);
}
else if(b == '*') //Hạ 1/4 kính sau tài xế
{
  digitalWrite(relay12,HIGH);
  digitalWrite(relay13,HIGH);
  delay(1375);
  digitalWrite(relay12,LOW);
  digitalWrite(relay13,LOW);
}
else if(b == '&') //Hạ 1/2 kính sau tài xế
{
  digitalWrite(relay12,HIGH);
  digitalWrite(relay13,HIGH);
  delay(2750);
  digitalWrite(relay12,LOW);
  digitalWrite(relay13,LOW);
}
else if(b == '^') //Hạ 3/4 kính sau tài xế
{
  digitalWrite(relay12,HIGH);
  digitalWrite(relay13,HIGH);
  delay(4125);
  digitalWrite(relay12,LOW);
  digitalWrite(relay13,LOW);
}
if(b == 'P') //Nâng hết kính sau phụ
{
  digitalWrite(relay14,HIGH);
  digitalWrite(relay15,HIGH);
  delay(5500);
  digitalWrite(relay14,LOW);
  digitalWrite(relay15,LOW);
}
else if(b == '%') //Nâng 1/4 kính sau phụ
{
  digitalWrite(relay14,HIGH);
  digitalWrite(relay15,HIGH);
  delay(1375);
  digitalWrite(relay14,LOW);
  digitalWrite(relay15,LOW);
}
else if(b == '$') //Nâng 1/2 kính sau phụ
{
  digitalWrite(relay14,HIGH);
  digitalWrite(relay15,HIGH);
  delay(2750);
  digitalWrite(relay14,LOW);
  digitalWrite(relay15,LOW);
}
else if(b == '#') //Nâng 3/4 kính sau phụ
{
  digitalWrite(relay14,HIGH);
  digitalWrite(relay15,HIGH);
  delay(4125);
  digitalWrite(relay14,LOW);
  digitalWrite(relay15,LOW);
}
if(b == 'p') //Hạ hết kính sau phụ
{
  digitalWrite(relay16,HIGH);
  digitalWrite(relay17,HIGH);
  delay(5500);
  digitalWrite(relay16,LOW);
  digitalWrite(relay17,LOW);
}
else if(b == '@') //Hạ 1/4 kính sau phụ
{
  digitalWrite(relay16,HIGH);
  digitalWrite(relay17,HIGH);
  delay(1375);
  digitalWrite(relay16,LOW);
  digitalWrite(relay17,LOW);
}
else if(b == '!') //Hạ 1/2 kính sau phụ
{
  digitalWrite(relay16,HIGH);
  digitalWrite(relay17,HIGH);
  delay(2750);
  digitalWrite(relay16,LOW);
  digitalWrite(relay17,LOW);
}
else if(b == '~') //Hạ 3/4 kính sau phụ
{
  digitalWrite(relay16,HIGH);
  digitalWrite(relay17,HIGH);
  delay(4125);
  digitalWrite(relay16,LOW);
  digitalWrite(relay17,LOW);
}
}
void chieusangtinhieu()
{
char c = Serial.read();
if(c == 'F') //Mở đèn demi
{
  digitalWrite(relay20,HIGH);
}
else if(c == 'f') //Tắt đèn demi
{
  digitalWrite(relay20,LOW);
}
if(c == 'H') //Mở đèn chiếu gần thì mở cả đèn demi
{
  digitalWrite(relay21,HIGH);
  digitalWrite(relay20,HIGH);
}
else if(c == 'h') //Tắt đèn chiếu gần thì đèn demi vẫn còn mở
{
  digitalWrite(relay21,LOW);
}
if(c == 'U') //Mở đèn chiếu xa thì đèn demi mở và đèn chiếu gần tắt
{
  digitalWrite(relay22,HIGH);
  digitalWrite(relay21,LOW);
  digitalWrite(relay20,HIGH);
}
else if(c ==  'u') //Tắt đèn chiếu xa thì đèn chiếu xa tắt, đèn chiếu gần mở và đèn sương mù mở
{
  digitalWrite(relay22,LOW);
  digitalWrite(relay21,HIGH);
  digitalWrite(relay20,HIGH);
}
else if(c == 'A') //Tắt hết tất cả các đèn trừ đèn tín hiệu
{
  digitalWrite(relay20,LOW);
  digitalWrite(relay21,LOW);
  digitalWrite(relay22,LOW);
}
if(c == 'T') //Mở đèn xi nhan phải thì đèn xi nhan trái tắt
{
  digitalWrite(relay24,HIGH);
  digitalWrite(relay26,LOW);
}
else if(c == 't')//Tắt đèn xi nhan phải
{
  digitalWrite(relay24,LOW);
}
if(c == 'V') //Mở đèn xi nhan trái thì xi nhan phải tắt
{
  digitalWrite(relay26,HIGH);
  digitalWrite(relay24,LOW);
}
else if(c == 'v') //Tắt đèn xi nhan trái
{
  digitalWrite(relay26,LOW);
}
else if(c == 'Z') //Mở đèn ưu tiên
{
  digitalWrite(relay28,HIGH);
}
if(c == 'z') //Tắt đèn ưu tiên
{
  digitalWrite(relay28,LOW);
}
}
void khoaig()
{
char d = Serial.read();
if(d == 'X') //Mở khóa IG
{
  digitalWrite(relay30,HIGH);
}
else if(d == 'x') //Tắt khóa IG
{
  digitalWrite(relay30,LOW);
}
}