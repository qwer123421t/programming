int redPin = 2; // 핀 번호 설정
int greenPin = 3;
int yellowPin = 4;
// 이 코드는 실행시 한번만 실행한다
// 세팅하는 곳
void setup()
{
  // LED를 출력으로 설정한다
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

// 반복하여 일을 실행 시키는 것
void loop()
{
  // LED를 켠다
  digitalWrite(redPin, HIGH);// 출력하라 redPin을 HIGH로 출력하라
  delay(1000); // 1초 기다리기
  // LED를 끈다
  digitalWrite(redPin, LOW); // redPin을 LOW로 출력하라
  delay(1000); // 1초 기다리기  
  // LED를 켠다
  digitalWrite(greenPin, HIGH);// 출력하라 redPin을 HIGH로 출력하라
  delay(1000); // 1초 기다리기
  // LED를 끈다
  digitalWrite(greenPin, LOW); // redPin을 LOW로 출력하라
  delay(1000); // 1초 기다리기
  // LED를 켠다
  digitalWrite(yellowPin, HIGH);// 출력하라 redPin을 HIGH로 출력하라
  delay(1000); // 1초 기다리기
  // LED를 끈다
  digitalWrite(yellowPin, LOW); // redPin을 LOW로 출력하라
  delay(1000); // 1초 기다리기
}