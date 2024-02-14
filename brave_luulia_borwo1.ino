// C++ code
//
void setup()
{
  pinMode(13, OUTPUT); // Vermelho 1
  pinMode(12, OUTPUT); // Amarelo 1
  pinMode(11, OUTPUT); // Verde 1
  pinMode(10, OUTPUT); // verde2
  pinMode(9, OUTPUT); // amarelo2
  pinMode(8, OUTPUT); // vermelho2
  
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(3000); // Wait for 0500 millisecond(s)
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(3000); // Wait for 0500 millisecond(s)
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  delay(3000); // Wait for 0500 millisecond(s)
   digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(3000); // Wait for 0500 millisecond(s)
  }
 