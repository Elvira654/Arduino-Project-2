int crveno=10;
int zuto=9;
int zeleno=8;

int crveno_Za_Pjesake=7;
int zeleno_Za_Pjesake=6;

void setup()
{
  pinMode(crveno, OUTPUT);
  pinMode(zuto, OUTPUT);
  pinMode(zeleno, OUTPUT);

  pinMode(crveno_Za_Pjesake,OUTPUT);
  pinMode(zeleno_Za_Pjesake,OUTPUT);

}
void loop()
{
  digitalWrite(crveno,HIGH);
  digitalWrite(zeleno_Za_Pjesake,HIGH);
  delay(5000);
  digitalWrite(zeleno_Za_Pjesake,LOW);
  delay(1000);
  digitalWrite(zeleno_Za_Pjesake,HIGH);
  delay(1000);
  digitalWrite(zeleno_Za_Pjesake,LOW);
  digitalWrite(crveno_Za_Pjesake,HIGH);
  digitalWrite(zuto,HIGH);
  delay(1000);
  digitalWrite(zuto,LOW);
  digitalWrite(crveno,LOW);
  digitalWrite(zeleno,HIGH);
  delay(8000);
  digitalWrite(zeleno,LOW);
  delay(1000);
  digitalWrite(zeleno,HIGH);
  delay(1000);
  digitalWrite(zeleno,LOW);
  digitalWrite(zuto,HIGH);
  delay(2000);
  digitalWrite(zuto,LOW);
  digitalWrite(crveno,HIGH);
  digitalWrite(crveno_Za_Pjesake,LOW);
  digitalWrite(zeleno_Za_Pjesake,HIGH);
  delay(5000);
  digitalWrite(zeleno_Za_Pjesake,LOW);
  delay(1000);
  digitalWrite(zeleno_Za_Pjesake,HIGH);
  delay(1000);
  digitalWrite(zeleno_Za_Pjesake,LOW);
  digitalWrite(crveno_Za_Pjesake,HIGH);
  digitalWrite(zuto,HIGH);
  delay(1000);
  digitalWrite(crveno,LOW);
  digitalWrite(zuto,LOW);
  digitalWrite(zeleno,HIGH);
  delay(6000);
  digitalWrite(zeleno,LOW);
  delay(1000);
  digitalWrite(zeleno,HIGH);
  delay(1000);
  digitalWrite(zeleno,LOW);
  digitalWrite(zuto,HIGH);
}
