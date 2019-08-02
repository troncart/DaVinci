/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********DaVinci / Line Following**************
***********13-07-2019**************
*/
 

void setup()

{
  Serial.begin(9600);

  pinMode(A0, INPUT);               // Initialize Pin A0 as Input Pin for IR Sensor 1

  pinMode(A1, INPUT);               // Initialize Pin A1 as Input Pin for IR Sensor 2

  pinMode(8, OUTPUT);             // Initialize Pin 8 as Output Pin for Motor Output 2

  pinMode(9, OUTPUT);             // Initialize Pin 9 as Output Pin for Motor Output 2
  pinMode(10, OUTPUT);           // Initialize Pin 10 as Output Pin for Motor Output 1

  pinMode(11, OUTPUT);           // Initialize Pin 11 as Output Pin for Motor Output 1

  pinMode(12, OUTPUT);

  pinMode(13, OUTPUT);

  digitalWrite(12, HIGH);

  digitalWrite(13, HIGH);
}




void loop()

{


  // put your main code here, to run repeatedly:

  int a = analogRead(A5);        // Get the values from Pin A0

  int b = analogRead(A2);        // Get the values from Pin A1

  Serial.print(a);
  Serial.print(" ");
  Serial.println(b);






  if (a < 512 && b < 512) {      // Forward Movement

    digitalWrite(8, HIGH);          // Pin 8 is High for Motor Output 2

    digitalWrite(9, LOW);           // Pin 9 is Low

    digitalWrite(10, HIGH);        // Pin 10 is High for Motor Output 1

    digitalWrite(11, LOW);         // Pin 11 is Low

  }



  //  if(a<100 && b<100){

  //  digitalWrite(8,HIGH);

  //  digitalWrite(9,LOW);

  //  digitalWrite(10,HIGH);

  // digitalWrite(11,LOW);

  // }





  if (a > 500 && b < 500) {     // Right Movement

    digitalWrite(8, LOW);         // Pin 8 is Low

    digitalWrite(9, LOW);         // Pin 9 is Low

    digitalWrite(10, HIGH);      // Pin 10 is High for Motor Output 1

    digitalWrite(11, LOW);       // Pin 11 is Low

  }



  if (a < 500 && b > 500) {     // Left Movement

    digitalWrite(8, HIGH);         // Pin 8 is High for Motor Output 2

    digitalWrite(9, LOW);          // Pin 9 is Low

    digitalWrite(10, LOW);        // Pin 10 is Low

    digitalWrite(11, LOW);        // Pin 11 is Low

  }



  if (a > 500 && b > 500) {     // Stop

    digitalWrite(8, LOW);          // Pin 8 is Low

    digitalWrite(9, LOW);          // Pin 9 is Low

    digitalWrite(10, LOW);        // Pin 10 is Low

    digitalWrite(11, LOW);        // Pin 11 is Low

  }



}
