#include <Servo.h> 
#include <math.h>

double pi = M_PI;

double coxa = 1.6;
double tibia = 6.5;
double femur = 4.2;

double centerx = 3;
double centery = 5.25;

void setup() {

    Serial.begin(9600);
    // put your setup code here, to run once:

}

void ink1(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    //  gamma = 180 - gamma;
    //  alpha = 180 - alpha;
    //  beta = 180 - beta;

    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(1, gamma);
    moveit(2, alpha);
    moveit(3, beta);
    //  Serial.print('T');
    //  Serial.print(tt);
    //  Serial.println("");
    //  delay((1.2)*tt);
}

void ink2(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    gamma = 180 - gamma;
    alpha = 180 - alpha;
    beta = 180 - beta;

    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(4, gamma);
    moveit(5, alpha);
    moveit(6, beta);
    //  Serial.print('T');
    //  Serial.print(tt);
    //  Serial.println("");
    //  delay((1.2)*tt);
}

void ink3(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    //  gamma = 180 - gamma;
    //  alpha = 180 - alpha;
    //  beta = 180 - beta;

    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(7, gamma);
    moveit(8, alpha);
    moveit(9, beta);
    //Serial.print('T');
    //Serial.print(tt);
    //Serial.println("");
    //delay((1.2)*tt);
}

void ink4(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    gamma = 180 - gamma;
    alpha = 180 - alpha;
    beta = 180 - beta;

    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(10, gamma);
    moveit(11, alpha);
    moveit(12, beta);
    //  Serial.print('T');
    //  Serial.print(tt);
    //  Serial.println("");
    //  delay((1.2)*tt);
}

void ink1m(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    //  gamma = 180 - gamma;
    //  alpha = 180 - alpha;
    //  beta = 180 - beta;
    //  beta -= 20;
    //  gamma+=25;
    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(1, gamma);
    moveit(2, alpha);
    moveit(3, beta);
    //  Serial.print('T');
    //  Serial.print(tt);
    //  Serial.println("");
    //  delay((1.2)*tt);
}

void ink2m(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    gamma = 180 - gamma + 5;
    alpha = 180 - alpha;
    beta = 180 - beta;

    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(4, gamma);
    moveit(5, alpha);
    moveit(6, beta);
    //  Serial.print('T');
    //  Serial.print(tt);
    //  Serial.println("");
    //  delay((1.2)*tt);
}

void ink3m(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    //  gamma = 180 - gamma;
    //  alpha = 180 - alpha;
    //  beta = 180 - beta;

    //beta -= 10;
    gamma += 10;

    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(7, gamma);
    moveit(8, alpha);
    moveit(9, beta);
    //Serial.print('T');
    //Serial.print(tt);
    //Serial.println("");
    //delay((1.2)*tt);
}

void ink4m(double x, double y, double z) {

    double L1 = sqrt(sq(x) + sq(y));
    double gamma = (atan2(x, y) / PI) * 180; // Gamma
    x = x / cos(gamma);
    double L = sqrt(sq(L1 - coxa) + sq(z));
    double beta = (acos((sq(tibia) + sq(femur) - sq(L)) / (2 * tibia * femur)) / PI) * 180;
    double alpha1 = (atan2(y - coxa, z) / PI) * 180;
    double alpha2 = (acos((sq(femur) + sq(L) - sq(tibia)) / (2 * femur * L))) / PI * 180;
    double alpha = 180 - (alpha1 + alpha2);

    gamma = 180 - gamma - 15;
    alpha = 180 - alpha;
    beta = 180 - beta;

    gamma = map(gamma, 0, 180, 500, 2500);
    alpha = map(alpha, 0, 180, 500, 2500);
    beta = map(beta, 0, 180, 500, 2500);

    moveit(10, gamma);
    moveit(11, alpha);
    moveit(12, beta);
    //  Serial.print('T');
    //  Serial.print(tt);
    //  Serial.println("");
    //  delay((1.2)*tt);
}

void moveall(double x, double y, double z) {

    double x1 = x + centerx;
    double y1 = y + centery;

    double x2 = -x + centerx;
    double y2 = -y + centery;

    double x3 = x + centerx;
    double y3 = y + centery;

    double x4 = -x + centerx;
    double y4 = -y + centery;

    ink1(x1, y1, z);
    ink2(x2, y2, z);
    ink3(x3, y3, z);
    ink4(x4, y4, z);

}

void movebody(double x, double y, double z) {

    double x1 = x + centerx;
    double y1 = y + centery;

    double x2 = -x + centerx;
    double y2 = -y + centery;

    double x3 = -x + centerx;
    double y3 = -y + centery;

    double x4 = x + centerx;
    double y4 = y + centery;

    ink1m(x1, y1, z);
    ink2m(x2, y2, z);
    ink3m(x3, y3, z);
    ink4m(x4, y4, z);

}

void moveup(double z_ini, double z_f) {
    double z_diff = z_ini - z_f;

}

void moveit(int snum, int pos) {

    Serial.print("#");
    Serial.print(snum);
    Serial.print("P");
    Serial.print(pos);

}

void delayit(int tt) {
    Serial.print('T');
    Serial.print(tt);
    Serial.println("");
    delay(tt * 1.2);
}
void bodycircle(float z, int tt) {

    ink4m(5, 5, z);
    ink1m(5, 5, 2 * z);
    ink2m(5, 5, 3 * z);
    ink3m(5, 5, 4 * z);

    delayit(tt);

    ink1m(5, 5, z);
    ink2m(5, 5, 2 * z);
    ink3m(5, 5, 3 * z);
    ink4m(5, 5, 4 * z);

    delayit(tt);

    ink2m(5, 5, z);
    ink3m(5, 5, 2 * z);
    ink4m(5, 5, 3 * z);
    ink1m(5, 5, 4 * z);

    delayit(tt);

    ink3m(5, 5, 1 * z);
    ink4m(5, 5, 2 * z);
    ink1m(5, 5, 3 * z);
    ink2m(5, 5, 4 * z);
    delayit(tt);

}

void loop() {
    /* for reference
    x2 = -x+centerx;
    y2 = -y+centery;
  
    x1 = x+centerx;
    y1 = y+centery;
  
    x4 = x+centerx;
    y4 = y+centery;
       
    x3 = - x + centerx;
    y3 = -y + centery;
    */

    moveall(1, 0, 3);
    ink3m(3, 5.25, 1);
    delayit(600);

    ink3m(4, 4, 1);
    delayit(600);

    ink3m(4, 4, 1.5);
    delayit(600);

    movebody(1, 0, 3);
    ink1m(3, 5.25, 1);
    delayit(600);

    ink1m(1, 5.25, 1);
    delayit(600);

    ink1m(1, 5.25, 3);
    delayit(600);

    ink2m(1, 5.25, 1);
    delayit(600);

    ink2m(5, 5.25, .5);
    delayit(600);

    moveall(-2, 0, 3);
    ink2m(5, 5.25, .5);
    ink4m(3, 5.25, 1);
    delayit(600);

    ink4m(1, 5.25, 1);
    delayit(600);

    ink4m(1, 5.25, 4);
    delayit(600);

    /*
    ink1(4,2,2);
    ink3(4,2,2);
    delayit(600);


    ink2(4,2,4);
    ink4(4,2,4);
    delayit(600);
    */
    //  ink3m(3,5.25,3);
    //  delayit(700);
}
