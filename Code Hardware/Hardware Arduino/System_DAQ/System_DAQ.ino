
char dato_rx;

//---------Estados-------------
typedef enum{
  Init,
  ProcessTrama,
  AnalogInput,
  DigitalInput,
  DigitalOutput
}app_State_FSM;

app_State_FSM app_State;
//-------------Vaiables------------------
typedef struct{
  char dato_Rx;
  char data_Buffer[50];
  char analog_Input[20];
  uint8_t posicion=0;
}data_Struct;

data_Struct datos;
//------------------------------------

void setup() {
  Serial.begin(9600);
  app_State = Init;
}

void loop() {
  switch(app_State){
    case Init:
         //Código
         
            datos.dato_Rx = Serial.read();

            if(datos.dato_Rx != 'F'){
              datos.data_Buffer[datos.posicion] = datos.dato_Rx;
              datos.posicion++;
            }
            else{
              datos.posicion = 0;
              app_State = ProcessTrama;
            }
            
            break;
            //------------------------------
    case ProcessTrama:
         //Código
         
            
            break;
            //------------------------------
    case AnalogInput:
         //Código
         
            
            break;
            //------------------------------

    case DigitalOutput:
         //Código
         
            
            break;
            //------------------------------
         }
      
  }
