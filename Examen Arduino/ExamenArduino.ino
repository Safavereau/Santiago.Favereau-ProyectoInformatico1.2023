#define RGBG 3
#define RGBB 5
#define RGBR 6
#define RGBG2 9
#define RGBB2 10
#define RGBR2 11
#define pulsador 2
#define potenciometro A0
int lectura = 0;
void setup()
{
pinMode(pulsador,INPUT);
}

void loop()
{
lectura =map(analogRead(0),0,1024,50,600);
int estado = digitalRead(pulsador);
  if(estado==1){
    analogWrite(RGBG,100);
    analogWrite(RGBB,0);
    analogWrite(RGBR,200);
    delay(lectura);
    analogWrite(RGBG,0);
    analogWrite(RGBB,255);
    analogWrite(RGBR,255);
    delay(lectura);
    analogWrite(RGBG,0);
    analogWrite(RGBB,0);
    analogWrite(RGBR,255);
    delay(lectura);
    analogWrite(RGBG,255);
    analogWrite(RGBB,0);
    analogWrite(RGBR,255);
    delay(lectura);
    
    analogWrite(RGBG2,0);
    analogWrite(RGBB2,0);
    analogWrite(RGBR2,0);
    delay(lectura);
    analogWrite(RGBG2,0);
    analogWrite(RGBB2,0);
    analogWrite(RGBR2,0);
    delay(lectura);
    analogWrite(RGBG2,0);
    analogWrite(RGBB2,0);
    analogWrite(RGBR2,0);
    delay(lectura);
    analogWrite(RGBG2,0);
    analogWrite(RGBB2,0);
    analogWrite(RGBR2,0);
    delay(lectura);
     
      
    }
  else{
    analogWrite(RGBG,0);
    analogWrite(RGBB,0);
    analogWrite(RGBR,0);
    delay(lectura);
    analogWrite(RGBG,0);
    analogWrite(RGBB,0);
    analogWrite(RGBR,0);
    delay(lectura);
    analogWrite(RGBG,0);
    analogWrite(RGBB,0);
    analogWrite(RGBR,0);
    delay(lectura);
    analogWrite(RGBG,0);
    analogWrite(RGBB,0);
    analogWrite(RGBR,0);
    delay(lectura);
    
    analogWrite(RGBG2,100);
    analogWrite(RGBB2,0);
    analogWrite(RGBR2,200);
    delay(lectura);
    analogWrite(RGBG2,0);
    analogWrite(RGBB2,255);
    analogWrite(RGBR2,255);
    delay(lectura);
    analogWrite(RGBG2,0);
    analogWrite(RGBB2,0);
    analogWrite(RGBR2,255);
    delay(lectura);
    analogWrite(RGBG2,255);
    analogWrite(RGBB2,0);
    analogWrite(RGBR2,255);
    delay(lectura);
    
 }
 
}