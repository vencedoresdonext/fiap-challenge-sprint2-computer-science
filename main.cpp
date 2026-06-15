const char usuario_autenticado_pin = 2;
const char bateria_cheia_pin = 3;
const char dispositivo_ligado_pin = 4;
const char veiculo_conectado_pin = 5;

const char energia_solar_pin = 6;
const char sistema_fotovoltaico_pin = 7;
const char capacidade_rede_pin = 8;

const char horario_pico_pin = 9;
const char usuario_prioritario_pin = 10;

const int led_verde = 11;
const int led_vermelho = 12;

void setup() {
  pinMode(usuario_autenticado_pin, INPUT_PULLUP);
  pinMode(bateria_cheia_pin, INPUT_PULLUP);
  pinMode(dispositivo_ligado_pin, INPUT_PULLUP);
  pinMode(veiculo_conectado_pin, INPUT_PULLUP);

  pinMode(energia_solar_pin, INPUT_PULLUP);
  pinMode(sistema_fotovoltaico_pin, INPUT_PULLUP);
  pinMode(capacidade_rede_pin, INPUT_PULLUP);

  pinMode(horario_pico_pin, INPUT_PULLUP);
  pinMode(usuario_prioritario_pin, INPUT_PULLUP);

  pinMode(led_verde, OUTPUT);
  pinMode(led_vermelho, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  bool usuario_autenticado = digitalRead(usuario_autenticado_pin);
  bool bateria_cheia = digitalRead(bateria_cheia_pin);
  bool dispositivo_ligado = digitalRead(dispositivo_ligado_pin);
  bool veiculo_conectado = digitalRead(veiculo_conectado_pin);

  bool energia_solar = digitalRead(energia_solar_pin);
  bool sistema_fotovoltaico = digitalRead(sistema_fotovoltaico_pin);
  bool capacidade_rede = digitalRead(capacidade_rede_pin);

  bool horario_pico = digitalRead(horario_pico_pin);
  bool usuario_prioritario = digitalRead(usuario_prioritario_pin);

  
  bool resultado =
    usuario_autenticado &&
    !bateria_cheia &&
    dispositivo_ligado &&
    veiculo_conectado &&
    (energia_solar || sistema_fotovoltaico || capacidade_rede) &&
    ((!horario_pico) || usuario_prioritario);

  
  if (resultado) {
    digitalWrite(led_verde, HIGH);
    digitalWrite(led_vermelho, LOW);
  } else {
    digitalWrite(led_verde, LOW);
    digitalWrite(led_vermelho, HIGH);
  }

  delay(100);
}
