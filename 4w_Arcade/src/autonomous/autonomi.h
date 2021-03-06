#include "functions.h"

void Front_Eight_P_Red() {
  dt_move_forward(160);
  pros::delay(1000);
  dt_stop();
  pros::delay(100);
  convey();
  pros::delay(700);
  convey_stop();
  pros::delay(100);
  dt_move_backwards(125);
  pros::delay(1200);
  flywheel();
  pros::delay(300);
  dt_stop();
  pros::delay(200);
  dt_turn_left(82);
  pros::delay(640);
  dt_stop();
  pros::delay(700);
  dt_move_forward(64);
  pros::delay(500);
  dt_stop();
  pros::delay(200);
  full_convey();
  pros::delay(670);
  full_convey_stop();
  pros::delay(50);
  dt_move_forward(140);
  pros::delay(720);
  dt_stop();
  pros::delay(200);
  full_convey();
  pros::delay(500);
  flywheel_stop();
  full_convey_stop();
  //convey();
  pros::delay(160);
  dt_turn_left(160);
  pros::delay(140);
  dt_move_forward(160);
  //pros::delay(350);
  //dt_turn_right(120);
  pros::delay(500);
  dt_move_backwards(160);
  pros::delay(700);
  dt_turn_right(120);
  pros::delay(650);
  flip_caps();
  dt_move_forward(160);
  pros::delay(200);
  dt_move_forward(100);
  pros::delay(1400);
  dt_move_backwards(100);
  pros::delay(500);
  dt_stop();
  /*dt_turn_left(140);
  pros::delay(240);
  dt_move_forward(160);
  pros::delay(750);
  dt_turn_left(80);
  pros::delay(280);
  dt_move_forward(120);
  pros::delay(200);
  dt_turn_left(80);
  pros::delay(300);
  dt_stop();
  */
  full_convey_stop();
}

void Front_Eight_P_Blue() {
  dt_move_forward(100);
  pros::delay(1700);
  dt_stop();
  pros::delay(100);
  convey();
  pros::delay(700);
  convey_stop();
  pros::delay(100);
  flywheel();
  dt_move_backwards(100);
  pros::delay(1600);
  dt_stop();
  pros::delay(200);
  dt_turn_right(82);
  pros::delay(660);
  dt_stop();
  pros::delay(700);
  dt_move_forward(64);
  pros::delay(500);
  dt_stop();
  pros::delay(200);
  full_convey();
  pros::delay(800);
  full_convey_stop();
  dt_move_forward(130);
  pros::delay(800);
  full_convey();
  dt_stop();
  pros::delay(500);
  flywheel_stop();
  full_convey_stop();
  //convey();
  dt_turn_right(120);
  pros::delay(110);
  dt_move_forward(100);
  //pros::delay(350);
  //dt_turn_right(120);
  pros::delay(600);
  dt_move_backwards(100);
  pros::delay(550);
  dt_turn_left(120);
  pros::delay(700);
  flip_caps();
  dt_move_forward(160);
  pros::delay(150);
  dt_move_forward(100);
  pros::delay(700);

  dt_stop();
  full_convey_stop();
  pros::delay(100);

  dt_turn_right(140);
  pros::delay(240);
  dt_move_forward(160);
  pros::delay(675);

  dt_turn_right(80);
  pros::delay(300);
  dt_move_forward(120);
  pros::delay(230);
  dt_turn_right(80);
  pros::delay(270);
  dt_move_forward(80);
  pros::delay(300);
  dt_stop();
  full_convey_stop();
}

void Back_Eight_P_Red() {
  dt_move_forward(160);
  pros::delay(1100);
  dt_stop();
  pros::delay(100);
  full_convey();
  pros::delay(700);
  dt_move_backwards(160);
  pros::delay(550);
  convey_stop();
  dt_turn_right(82);
  pros::delay(200);
  index_down();
  pros::delay(100);
  index_stop();
  pros::delay(400);
  dt_move_forward(100);
  pros::delay(950);
  dt_turn_left(81);
  pros::delay(700);
  flip_caps();
  dt_move_forward(50);
  pros::delay(1700);
  //dt_move_forward(150);
  //pros::delay(340);
  dt_move_backwards(100);
  pros::delay(650);
  dt_stop();
  //dt_move_backwards(160);
  //pros::delay(50);
  convey_stop();
  dt_turn_left(75);
  pros::delay(700);
  //flywheel();
  //dt_stop();
  dt_move_forward(80);
  //pros::delay(2000);
  //dt_turn_right(65);
  pros::delay(310);
  dt_stop();
  pros::delay(100);
  //flywheel();
  //pros::delay
  //full_convey();
  //pros::delay(1000);
  //flywheel_stop();
  //convey_stop();
}

void Back_Nine_P_Blue() {
  dt_move_forward(100);
  pros::delay(1700);
  dt_stop();
  pros::delay(100);
  full_convey();
  pros::delay(700);
  dt_move_backwards(100);
  pros::delay(625);
  convey_stop();
  dt_turn_left(82);
  pros::delay(200);
  index_down();
  pros::delay(100);
  index_stop();
  pros::delay(400);
  dt_move_forward(100);
  pros::delay(975);
  dt_turn_right(81);
  pros::delay(700);
  flip_caps();
  dt_move_forward(50);
  pros::delay(1750);
  //dt_move_forward(150);
  //pros::delay(340);
  dt_move_backwards(100);
  pros::delay(650);
  dt_stop();
  //dt_move_backwards(160);
  //pros::delay(50);
  convey_stop();
  dt_turn_right(75);
  pros::delay(675);
  //flywheel();
  //dt_stop();
  dt_move_forward(80);
  //pros::delay(2000);
  //dt_turn_left(65);
  pros::delay(310);
  dt_stop();
  pros::delay(100);
  //flywheel();
  //pros::delay
  //full_convey();
  //pros::delay(1000);
  //flywheel_stop();
  //convey_stop();
}

void Skills() {
  dt_move_forward(100);
  pros::delay(1870);
  dt_stop();
  pros::delay(100);
  full_convey();
  pros::delay(1500);
  full_convey_stop();
  pros::delay(60);
  dt_move_backwards(160);
  pros::delay(300);
  flip_caps();
  dt_move_forward(80);
  pros::delay(1000);
  full_convey_stop();
  index_down();
  pros::delay(600);
  index_stop();
  dt_move_backwards();
  pros::delay(2850);
  dt_move_forward(80);
  flywheel();
  pros::delay(370);
  dt_turn_left(82);
  pros::delay(670);
  dt_stop();
  pros::delay(700);
  dt_move_forward(64);
  pros::delay(500);
  dt_stop();
  pros::delay(200);
  full_convey();
  pros::delay(800);
  full_convey_stop();
  dt_move_forward(130);
  pros::delay(800);
  full_convey();
  dt_stop();
  pros::delay(500);
  flywheel_stop();
  full_convey_stop();
  dt_turn_left(80);
  pros::delay(150);
  //convey();
  dt_move_forward(160);
  //dt_turn_right(120);
  pros::delay(600);
  dt_turn_right(30);
  pros::delay(500);
  dt_move_backwards(160);
  pros::delay(2100);
  dt_stop();
  dt_turn_right(100);
  pros::delay(600);
  dt_move_forward(127);
  pros::delay(3000);
  dt_stop();
}

void v_drive_forward() {
  v_forward();
}

void test() {
  slow_flywheel();
  pros::delay(5000);
  full_convey();
  pros::delay(1000);
  full_convey_stop();
  flywheel_stop();

}

void Front_Eight_P_Skills() {
  dt_move_forward(160);
  pros::delay(1100);
  dt_stop();
  pros::delay(100);
  convey();
  pros::delay(700);
  convey_stop();
  pros::delay(100);
  dt_move_backwards(185);
  flywheel();
  pros::delay(1100);
  dt_stop();
  pros::delay(200);
  dt_turn_left(82);
  pros::delay(640);
  dt_stop();
  pros::delay(700);
  dt_move_forward(64);
  pros::delay(500);
  dt_stop();
  pros::delay(200);
  full_convey();
  pros::delay(700);
  full_convey_stop();
  dt_move_forward(130);
  pros::delay(800);
  full_convey();
  dt_stop();
  pros::delay(500);
  flywheel_stop();
  full_convey_stop();
  full_convey();
  pros::delay(400);
  //dt_turn_left(120);
  //pros::delay(110);
  //dt_move_forward(160);
  //pros::delay(350);
  //dt_turn_right(120);
  pros::delay(600);
  full_convey_stop();
  dt_move_backwards(160);
  pros::delay(1550);
  dt_stop();
  dt_turn_right(100);
  pros::delay(600);
  dt_move_forward(127);
  pros::delay(3180);
  dt_stop();
  /*dt_turn_right(120);
  pros::delay(630);
  flip_caps();
  dt_move_forward(160);
  pros::delay(150);
  dt_move_forward(100);
  pros::delay(700);
  dt_turn_left(140);
  pros::delay(240);
  dt_move_forward(160);
  pros::delay(750);
  dt_turn_left(80);
  pros::delay(280);
  dt_move_forward(120);
  pros::delay(200);
  dt_turn_left(80);
  pros::delay(300);
  dt_stop();
  full_convey_stop();
  */
}
