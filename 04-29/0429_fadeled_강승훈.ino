// C++ code
//
int ledPin = 3;  // 아날로그 핀 번호 설정
int brightness = 0; // lED 밝기
int fadeAmount = 1; // LED fade 할 포인트 수

// 코드 실행 시 한번 실행
void setup()
{
  // 핀번호 3번을 출력으로 선언
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // 아날로기 핀번호 3번으로 세팅
  analogWrite(ledPin, brightness);
  
  // 반복하면서 다음 밝기 변경
  brightness = brightness + fadeAmount;
  
  //fad 끝에서 fade 방향을 반대로
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
 // 30밀리 초 기다리기
  delay(10);
}