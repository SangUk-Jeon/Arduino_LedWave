void setup() {
  for(int i = 8; i <= 12; i++) { // 반복문 for 사용. 8부터 12까지 1씩 증가 
    pinMode(i, OUTPUT);  // i 번호 핀에 OUTPUT 
    digitalWrite(i, true); // i 번호에 디지털 신호인 true(1) 을 넣어줬습니다. 
    delay(450); // 딜레이 0.45 초 
    digitalWrite(i, fasle); // i 번호에 디지털 신호인  false(0) 을 넣어줬습니다. 
    delay(450); // 딜레이 0.45 초 
    } 
}

void loop() {
  // put your main code here, to run repeatedly:
}
