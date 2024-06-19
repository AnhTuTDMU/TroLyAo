const int relayPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 26, 28, 30, 32, 34};
//Index: 0, 1, 2, 3, 4, 5, 6, 7,  8, 9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26
//Value: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 26, 28, 30, 32, 34
const int relayCount = sizeof(relayPins) / sizeof(relayPins[0]); //  tính toán số lượng phần tử trong mảng relayPins bằng cách chia tổng kích thước của mảng (tính bằng byte)
                                                                // cho kích thước của một phần tử trong mảng (cũng tính bằng byte). Kết quả là số lượng phần tử trong mảng relayPins(có 27 phần tử).

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < relayCount; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW);
  }
}

void loop() {
  gapguong();
  nanghakinh();
  chieusangtinhieu();
  khoaig();
}

void gapguong() {
  char a = Serial.read();
  switch (a) {
    case 'M': // Mở gương chiếu hậu
      digitalWrite(relayPins[16], HIGH);
      digitalWrite(relayPins[17], HIGH);
      digitalWrite(relayPins[25], LOW);
      digitalWrite(relayPins[26], HIGH);
      break;
    case 'G': // Gập gương chiếu hậu
      digitalWrite(relayPins[25], HIGH);
      digitalWrite(relayPins[26], HIGH);
      digitalWrite(relayPins[16], LOW);
      digitalWrite(relayPins[17], HIGH);
      break;
    case 'T': // Thoát khỏi chế độ
      digitalWrite(relayPins[16], LOW);
      digitalWrite(relayPins[17], LOW);
      digitalWrite(relayPins[25], LOW);
      digitalWrite(relayPins[26], LOW);
      break;
  }
}

void nanghakinh() {
  char b = Serial.read();
  switch (b) {
    // Nâng kính bên tài xế
    case 'L': handleWindow(0, 5500); break;
    case '1': handleWindow(0, 1375); break;
    case '2': handleWindow(0, 2750); break;
    case '3': handleWindow(0, 4125); break;
    // Hạ kính bên tài xế
    case 'l': handleWindow(2, 5500); break;
    case '4': handleWindow(2, 1375); break;
    case '5': handleWindow(2, 2750); break;
    case '6': handleWindow(2, 4125); break;
    // Nâng kính bên phụ
    case 'R': handleWindow(4, 5500); break;
    case '7': handleWindow(4, 1375); break;
    case '8': handleWindow(4, 2750); break;
    case '9': handleWindow(4, 4125); break;
    // Hạ kính bên phụ
    case 'r': handleWindow(6, 5500); break;
    case '0': handleWindow(6, 1375); break;
    case '`': handleWindow(6, 2750); break;
    case '-': handleWindow(6, 4125); break;
    // Nâng kính sau tài xế
    case 'S': handleWindow(8, 5500); break;
    case '_': handleWindow(8, 1375); break;
    case '+': handleWindow(8, 2750); break;
    case '=': handleWindow(8, 4125); break;
    // Hạ kính sau tài xế
    case 's': handleWindow(10, 5500); break;
    case '*': handleWindow(10, 1375); break;
    case '&': handleWindow(10, 2750); break;
    case '^': handleWindow(10, 4125); break;
    // Nâng kính sau phụ
    case 'P': handleWindow(12, 5500); break;
    case '%': handleWindow(12, 1375); break;
    case '$': handleWindow(12, 2750); break;
    case '#': handleWindow(12, 4125); break;
    // Hạ kính sau phụ
    case 'p': handleWindow(14, 5500); break;
    case '@': handleWindow(14, 1375); break;
    case '!': handleWindow(14, 2750); break;
    case '~': handleWindow(14, 4125); break;
  }
}

void handleWindow(int relayIndex, int duration) {
  digitalWrite(relayPins[relayIndex], HIGH);
  digitalWrite(relayPins[relayIndex + 1], HIGH);
  delay(duration);
  digitalWrite(relayPins[relayIndex], LOW);
  digitalWrite(relayPins[relayIndex + 1], LOW);
}

void chieusangtinhieu() {
  char c = Serial.read();
  switch (c) {
    case 'F': digitalWrite(relayPins[18], HIGH); break; // Mở đèn demi
    case 'f': digitalWrite(relayPins[18], LOW); break; // Tắt đèn demi
    case 'H': // Mở đèn chiếu gần thì mở cả đèn demi
      digitalWrite(relayPins[19], HIGH);
      digitalWrite(relayPins[18], HIGH);
      break;
    case 'h': digitalWrite(relayPins[19], LOW); break; // Tắt đèn chiếu gần thì đèn demi vẫn còn mở
    case 'U': // Mở đèn chiếu xa thì đèn demi mở và đèn chiếu gần tắt
      digitalWrite(relayPins[20], HIGH);
      digitalWrite(relayPins[19], LOW);
      digitalWrite(relayPins[18], HIGH);
      break;
    case 'u': // Tắt đèn chiếu xa thì đèn chiếu xa tắt, đèn chiếu gần mở và đèn sương mù mở
      digitalWrite(relayPins[20], LOW);
      digitalWrite(relayPins[19], HIGH);
      digitalWrite(relayPins[18], HIGH);
      break;
    case 'A': // Tắt hết tất cả các đèn trừ đèn tín hiệu
      digitalWrite(relayPins[18], LOW);
      digitalWrite(relayPins[19], LOW);
      digitalWrite(relayPins[20], LOW);
      break;
    case 'T': // Mở đèn xi nhan phải thì đèn xi nhan trái tắt
      digitalWrite(relayPins[21], HIGH);
      digitalWrite(relayPins[22], LOW);
      break;
    case 't': digitalWrite(relayPins[21], LOW); break; // Tắt đèn xi nhan phải
    case 'V': // Mở đèn xi nhan trái thì xi nhan phải tắt
      digitalWrite(relayPins[22], HIGH);
      digitalWrite(relayPins[21], LOW);
      break;
    case 'v': digitalWrite(relayPins[22], LOW); break; // Tắt đèn xi nhan trái
    case 'Z': digitalWrite(relayPins[23], HIGH); break; // Mở đèn ưu tiên
    case 'z': digitalWrite(relayPins[23], LOW); break; // Tắt đèn ưu tiên
  }
}

void khoaig() {
  char d = Serial.read();
  switch (d) {
    case 'X': digitalWrite(relayPins[24], HIGH); break; // Mở khóa IG
    case 'x': digitalWrite(relayPins[24], LOW); break; // Tắt khóa IG
  }
}
