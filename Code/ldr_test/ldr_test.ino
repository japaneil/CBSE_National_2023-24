int ldr1 = A0;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(ldr1, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(ldr1);
  Serial.println(val);
  delay(100);
}
 