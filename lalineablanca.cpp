// PROTOTIPO
bool liniaBlanca ();


// AL FINAL DA FUNCION MAIN
  corregirPos();
  atras();
  while(!liniaBlanca())
    Brain.Screen.print("cub naranja no trobat");

  //wait(5,sec);
  para();
  liberar();

// FUNCIPM
bool liniaBlanca () {

  //vex::color color;
  Optical4.setLight(ledState::on);
  Optical4.setLightPower(100,percent);
 
  while (true) {
    vex::color color = Optical4.color();

    if (color == vex::color::white) {
      Brain.Screen.setCursor(1, 1);
      Brain.Screen.print("cub blanc trobat");
      return true;
    }
    else if (color == vex::color::yellow) {
      Brain.Screen.setCursor(1, 1);
      Brain.Screen.print("cub blanc trobat");
      return true;
    }
    else {
      Brain.Screen.print("Cap trobat");
    }

  }
    return -1;
}
