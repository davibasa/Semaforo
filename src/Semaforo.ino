#include <Arduino.h>

// Classe para controlar o semáforo usando ponteiros
class Semaforo
{
private:
  int *pinVermelho;
  int *pinAmarelo;
  int *pinVerde;

public:
  // Construtor que inicializa os pinos dos LEDs com ponteiros
  Semaforo(int pinoVermelho, int pinoAmarelo, int pinoVerde)
  {
    pinVermelho = new int(pinoVermelho);
    pinAmarelo = new int(pinoAmarelo);
    pinVerde = new int(pinoVerde);

    // Configura os pinos como saídas
    pinMode(*pinVermelho, OUTPUT);
    pinMode(*pinAmarelo, OUTPUT);
    pinMode(*pinVerde, OUTPUT);
  }

  // Método para alternar as fases do semáforo
  void alternarFases()
  {
    // 1. Vermelho por 6 segundos
    ligarVermelho();
    delay(6000);

    // 2. Amarelo por 2 segundos
    ligarAmarelo();
    delay(2000);

    // 3. Verde por 2 segundos (fase inicial)
    ligarVerde();
    delay(2000);

    // 4. Verde por mais 2 segundos (tempo adicional para pedestres)
    delay(2000);

    // 5. Amarelo por 2 segundos
    ligarAmarelo();
    delay(2000);
  }

  // Métodos auxiliares para cada cor usando ponteiros
  void ligarVermelho()
  {
    digitalWrite(*pinVermelho, HIGH);
    digitalWrite(*pinAmarelo, LOW);
    digitalWrite(*pinVerde, LOW);
  }

  void ligarAmarelo()
  {
    digitalWrite(*pinVermelho, LOW);
    digitalWrite(*pinAmarelo, HIGH);
    digitalWrite(*pinVerde, LOW);
  }

  void ligarVerde()
  {
    digitalWrite(*pinVermelho, LOW);
    digitalWrite(*pinAmarelo, LOW);
    digitalWrite(*pinVerde, HIGH);
  }

  // Destrutor para liberar a memória alocada para os ponteiros
  ~Semaforo()
  {
    delete pinVermelho;
    delete pinAmarelo;
    delete pinVerde;
  }
};

// Definição dos pinos dos LEDs
const int ledVermelho = 13;
const int ledAmarelo = 27;
const int ledVerde = 32;

// Instância do semáforo usando ponteiros
Semaforo *semaforo;

void setup()
{
  Serial.begin(115200);
  // Criação dinâmica do objeto Semaforo
  semaforo = new Semaforo(ledVermelho, ledAmarelo, ledVerde);
}

void loop()
{
  Serial.println("Alternando fases do semáforo...");
  semaforo->alternarFases();
}

// Destrutor do objeto
void endProgram()
{
  delete semaforo;
}
