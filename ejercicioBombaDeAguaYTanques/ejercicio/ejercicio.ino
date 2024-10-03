/*1) El programa debe cumplir con lo siguiente:  sólo un tanque
debe llenarse a la vez, siendo el tanque 1 el de mayor prioridad
y el 3 el de menor. Esto quiere decir, por ejemplo, que si el 
tanque 2 y el tanque 3 necesitan llenarse, primero debe hacerlo 
el tanque 2 y luego el 3. Cada vez que un tanque necesita llenarse
debe encenderse la bomba y abrir la electroválvula correspondiente.

2) Realizar un conteo de las veces que se vacían los tanques 
y enviar dicha información por el puerto serie.


SALIDAS
PIN	DISPOSITIVO
8	boya1
7	boya2
4 	boya3
ENTRADAS
13	Bomba
9	Electrov1
6   Electrov2
5	Electrov3 
*/
//Pines
const int boyaUno = 8;
const int boyaDos = 7;
const int boyaTres = 4;

const int bombaDeAgua = 13;
const int electroV1 = 9;
const int electroV2 = 6;
const int electroV3 = 5;

bool estadoBoyaUno = true;
bool estadoBoyaDos = true;
bool estadoBoyaTres = true;

bool estadoPrevBoyaUno = false;
bool estadoPrevBoyaDos = false;
bool estadoPrevBoyaTres = false;

bool estadoBomba = false; //false = bomba apagada | true = bomba en acción.

unsigned int conteoVacio[3] = {0};
/*
[0] = tanque 1
[1] = tanque 2
[2] = tanque 3
*/

void enviarConteoVacioSerie() {
    Serial.println("Vacios del tanque 1: ");
    Serial.println(conteoVacio[0]);
    Serial.println("\nVacios del tanque 2: ");
    Serial.println(conteoVacio[1]);
    Serial.println("\nVacios del tanque 3: ");
    Serial.println(conteoVacio[2]);
}

void encenderBombaValvula (const int valvula) {
	  digitalWrite(valvula, HIGH);
  
    if (!estadoBomba) {
  	  digitalWrite(bombaDeAgua, HIGH);
  	  estadoBomba = true;
    }
}

void apagarBombaValvula (const int valvula, bool mantenerEstado) {
	  digitalWrite(valvula, LOW);
  
    if (!mantenerEstado) {
  	  digitalWrite(bombaDeAgua, LOW);
      estadoBomba = false;
    }
}

void setup(){
	  Serial.begin(9600);
  
  	pinMode(boyaUno, INPUT);
  	pinMode(boyaDos, INPUT);
  	pinMode(boyaTres, INPUT);
  
  	pinMode(electroV1, OUTPUT);
  	pinMode(electroV2, OUTPUT);
  	pinMode(electroV3, OUTPUT);
  
  	pinMode(bombaDeAgua, OUTPUT);
    
}

void loop(){
    /*
    estado = 1 => boya baja (tanque no lleno)
    estado = 0 => boya alta (tanque lleno)
    */
  
  	estadoBoyaUno = digitalRead(boyaUno);
  	estadoBoyaDos = digitalRead(boyaDos);
  	estadoBoyaTres = digitalRead(boyaTres);
  
	//Verificación del tanque 1
    if (estadoBoyaUno) {
  		encenderBombaValvula(electroV1);
    	apagarBombaValvula(electroV2, true);
    	apagarBombaValvula(electroV3, true);
    } else if (!estadoBoyaUno && estadoPrevBoyaUno) {
  		conteoVacio[0]++;
    	enviarConteoVacioSerie();
  	} else if (estadoBoyaDos) { //Verificación tanque 2
  		encenderBombaValvula(electroV2);
    	apagarBombaValvula(electroV1, true);
    	apagarBombaValvula(electroV3, true);
  	} else if (!estadoBoyaDos && estadoPrevBoyaDos) {
  		conteoVacio[1]++;
    	enviarConteoVacioSerie();
  	} else if (estadoBoyaTres) { //Verificación tanque 3
    	encenderBombaValvula(electroV3);
    	apagarBombaValvula(electroV1, true);
    	apagarBombaValvula(electroV2, true);
  	} else if (!estadoBoyaTres && estadoPrevBoyaTres) {
  		conteoVacio[2]++;
  		enviarConteoVacioSerie();
  	} 
  
  	//Apagado de las válvulas
  	if (!estadoBoyaUno && !estadoBoyaDos && !estadoBoyaTres){
  		apagarBombaValvula(electroV1, false);
    	apagarBombaValvula(electroV2, false);
    	apagarBombaValvula(electroV3, false);
  	}  

  	estadoPrevBoyaUno = estadoBoyaUno;
    estadoPrevBoyaDos = estadoBoyaDos;
    estadoPrevBoyaTres = estadoBoyaTres;
}

