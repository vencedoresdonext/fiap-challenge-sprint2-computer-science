const char usuario = A0;
const char veiculo = A1;
const char energia = A2;
const char pico = A3;

const int ledVerde = 12;
const int ledVermelho = 13;

void setup()
{
    pinMode(usuario, INPUT_PULLUP);
    pinMode(veiculo, INPUT_PULLUP);
    pinMode(energia, INPUT_PULLUP);
    pinMode(pico, INPUT_PULLUP);

    pinMode(ledVerde, OUTPUT);
    pinMode(ledVermelho, OUTPUT);
}

void loop()
{
    bool U = !digitalRead(usuario);
    bool V = !digitalRead(veiculo);
    bool E = !digitalRead(energia);
    bool H = !digitalRead(pico);

    bool autorizacao =
        U &&
        V &&
        E &&
        !H;

    if (autorizacao)
    {
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledVermelho, LOW);
    }
    else
    {
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledVermelho, HIGH);
    }
}
