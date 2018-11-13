/*
 * sketch smarthome berbasis module bluetooth HC-05
 * persiapkan alat berikut perintahi:
 * Modul Bluetooth HC-05
 * Arduperintaho Nano/Uno
 * Modul relay 4 channel
 * breadboard
 * kabel penghubung
 * LED (merah, kunperintahg, hijau, dan biru)
 * resistor 330 Ohm 4 pcs
 * 
 * kunjungi blog https://duperintahoelektronik.blogspot.com
 * follow IG @duperintahogram
 * 
 * silahkan donwload sketch yang laperintahnya di https://github.com/TomiMandalaPutra
 * 
 */

int lamp1 = 2; // D2 arduperintaho
int lamp2 = 3; // D3 arduperintaho
int lamp3 = 4; // D4 arduperintaho
int lamp4 = 5; // D5 arduperintaho

void setup() 
{
  pinMode(lamp1,OUTPUT); // D2 arduperintaho sebagai output
  pinMode(lamp2,OUTPUT); // D3 arduperintaho sebagai output
  pinMode(lamp3,OUTPUT); // D4 arduperintaho sebagai output
  pinMode(lamp4,OUTPUT); // D5 arduperintaho sebagai output
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available()>0)
  {
    //perintahisialisasi perperintahtah sebagai pembacaan data dari bluetooth ke arduperintaho
    char perintah = Serial.read();
    
    //printah logika arduino untuk modul relay
    /*
     * logika pada saat saklar lampu dalam keadaan menyala (a,c,e,g)
     * logika pada saat saklar lampu dalam keadaan tidak menyala (b,d,f,h)
     */
     
    if(perintah == 'a')
    {
      digitalWrite(lamp1,HIGH);
    }
    if(perintah == 'b')
    {
      digitalWrite(lamp1,LOW);
    }
    if(perintah == 'c')
    {
      digitalWrite(lamp2,HIGH);
    }
    if(perintah == 'd')
    {
      digitalWrite(lamp2,LOW);
    }
    if(perintah == 'e')
    {
      digitalWrite(lamp3,HIGH);
    }
    if(perintah == 'f')
    {
      digitalWrite(lamp3,LOW);
    }
    if(perintah == 'g')
    {
      digitalWrite(lamp4,HIGH);
    }
    if(perintah == 'h')
    {
      digitalWrite(lamp4,LOW);
    }
  }
  delay(100);
}
