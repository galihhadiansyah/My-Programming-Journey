//GALIH HADIANSYAH
//XI TAV 1

#define MQ2pin 16 // Mendefinikasi pin yang terhubung ke sensor MQ2
int sensorValue; // Variabel untuk menyimpan nilai sensor
void setup(){
  Serial.begin(9600); // mulai komunikasi serial dengan kecepatan 9600 baud
  Serial.println("memanaskan"); // cetak pesan "memanaskan MQ2" ke port serial
  delay(20000);}
void loop(){
  sensorValue = digitalRead(MQ2pin);
  Serial.print("Digital Output:");
  Serial.print(sensorValue);
  if (sensorValue){
    Serial.println(" | Smoke/Gas: Tidak Terdeteksi");
  }else{
    Serial.println(" | Smoke/Gas: Terdeteksi");}
  delay(2000);}
