char c;
int distance1 = 1000;
int distance2 = 1250;
int distance3 = 1500;
int distance4 = 1750;
int distance5 = 2000;
int time_delay1 = (5);
int time_delay2 = (10);
int time_delay3 = (15);
int time_delay4 = (20);
int time_delay5 = (25);
int  traffic;
void setup()
{
  // Serial.begin(9600);
  pinMode(2, INPUT);//red1
  pinMode(3, INPUT);//yellow2
  pinMode(4, INPUT);//green3

  pinMode(5, INPUT);//red2
  pinMode(6, INPUT);//yellow2
  pinMode(7, OUTPUT);//green2

  pinMode(8, OUTPUT);//red3
  pinMode(9, OUTPUT);//yellow3
  pinMode(10, OUTPUT);//green3

  pinMode(11, OUTPUT);//red4
  pinMode(12, OUTPUT);//yellow4
  pinMode(A0, OUTPUT);//green4

  pinMode(A1, OUTPUT);//red5
  pinMode(A2, OUTPUT);//yellow5
  pinMode(A3, OUTPUT);//green5

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  delay(3000);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
//  delay(3000);

}

void loop() {
  while (Serial.available() > 0) {
    traffic = Serial.read();
    Serial.println(traffic);
    if (traffic == 'A' || traffic == 65 || traffic == 193)
    {
      digitalWrite(2, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      //      delay(500);
      digitalWrite(4, HIGH);
      delay(distance1 * time_delay1);
      digitalWrite(4, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(2, HIGH);
      digitalWrite(5, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(distance2 * time_delay1);
      digitalWrite(7, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(5, HIGH);
      digitalWrite(8, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      delay(distance3 * time_delay1);
      digitalWrite(10, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      delay(500);
      digitalWrite(8, HIGH);
      digitalWrite(11, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      digitalWrite(A0, HIGH);
      delay(distance4 * time_delay1);
      digitalWrite(A0, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      digitalWrite(11, HIGH);
      digitalWrite(A1, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A3, HIGH);
      delay(distance5 * time_delay1);
      digitalWrite(A3, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A1, HIGH);
      Serial.println("1");
    }
    else if (traffic == 'B' || traffic == 66|| traffic == 194)
    {
      digitalWrite(2, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(4, HIGH);
      delay(distance1 * time_delay2);
      digitalWrite(4, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(2, HIGH);
      digitalWrite(5, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(distance2 * time_delay2);
      digitalWrite(7, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(5, HIGH);
      digitalWrite(8, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      delay(distance3 * time_delay2);
      digitalWrite(10, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      delay(500);
      digitalWrite(8, HIGH);
      digitalWrite(11, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      digitalWrite(A0, HIGH);
      delay(distance4 * time_delay2);
      digitalWrite(A0, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      digitalWrite(11, HIGH);
      delay(500);
      digitalWrite(A1, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A3, HIGH);
      delay(distance5 * time_delay2);
      digitalWrite(A3, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A1, HIGH);
      Serial.println("2");
    }
    else if (traffic == 'C' || traffic == 67|| traffic == 195)
    {
      digitalWrite(2, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(4, HIGH);
      delay(distance1 * time_delay3);
      digitalWrite(4, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(2, HIGH);
      digitalWrite(5, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(distance2 * time_delay3);
      digitalWrite(7, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(5, HIGH);
      digitalWrite(8, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      delay(distance3 * time_delay3);
      digitalWrite(10, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      delay(500);
      digitalWrite(8, HIGH);
      digitalWrite(11, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      digitalWrite(A0, HIGH);
      delay(distance4 * time_delay3);
      digitalWrite(A0, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      digitalWrite(11, HIGH);
      digitalWrite(A1, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A3, HIGH);
      delay(distance5 * time_delay3);
      digitalWrite(A3, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A1, HIGH);
      Serial.println("4");
    }
    else if (traffic == 'D' || traffic == 68|| traffic == 196)
    {
      digitalWrite(2, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(4, HIGH);
      delay(distance1 * time_delay4);
      digitalWrite(4, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(2, HIGH);
      digitalWrite(5, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(distance2 * time_delay4);
      digitalWrite(7, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(5, HIGH);
      digitalWrite(8, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      delay(distance3 * time_delay4);
      digitalWrite(10, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      delay(500);
      digitalWrite(8, HIGH);
      digitalWrite(11, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      digitalWrite(A0, HIGH);
      delay(1750 * time_delay4);
      digitalWrite(A0, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      digitalWrite(11, HIGH);
      digitalWrite(A1, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A3, HIGH);
      delay(distance5 * time_delay4);
      digitalWrite(A3, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A1, HIGH);
      Serial.println("4");
    }
    else if (traffic == 'E' || traffic == 69 || traffic == 197)
    {
      digitalWrite(2, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(4, HIGH);
      delay(distance1 * time_delay5);
      digitalWrite(4, LOW);
      delay(500);
      digitalWrite(3, HIGH);
      delay(500);
      digitalWrite(3, LOW);
      delay(500);
      digitalWrite(2, HIGH);
      digitalWrite(5, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(distance2 * time_delay5);
      digitalWrite(7, LOW);
      delay(500);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(5, HIGH);
      digitalWrite(8, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      delay(distance3 * time_delay5);
      digitalWrite(10, LOW);
      delay(500);
      digitalWrite(9, HIGH);
      delay(500);
      digitalWrite(9, LOW);
      delay(500);
      digitalWrite(8, HIGH);
      digitalWrite(11, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      digitalWrite(A0, HIGH);
      delay(distance4 * time_delay5);
      digitalWrite(A0, LOW);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      digitalWrite(11, HIGH);
      digitalWrite(A1, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A3, HIGH);
      delay(distance5 * time_delay5);
      digitalWrite(A3, LOW);
      delay(500);
      digitalWrite(A2, HIGH);
      delay(500);
      digitalWrite(A2, LOW);
      digitalWrite(A1, HIGH);
      Serial.println("5");
    }
  }
}
