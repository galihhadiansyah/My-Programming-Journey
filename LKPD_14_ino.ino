//galih hadiansyah
//XI TAV 1
#define MQ2_PIN 4
void setup() {
  Serial.begin(115200);
  pinMode(MQ2_PIN, INPUT);}
void loop(){
  int mq2Value = analogRead(MQ2_PIN);
  Serial.print("Nilai MQ-2;:");
  Serial.println(mq2Value);
  delay(1000);}
