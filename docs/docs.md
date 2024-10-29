# Parte 1: Montagem Física do Semáforo

## \* **Materiais Necessários** :

| Componente   | Descrição                         |
| ------------ | ----------------------------------- |
| LED Vermelho | LED para sinalização de parada    |
| LED Amarelo  | LED para sinalização de atenção |
| LED Verde    | LED para sinalização de passagem  |
| Resistor     | Limitador de corrente para LED      |
| Protoboard   | Base para montagem dos circuitos    |
| Arduino Uno  | Microcontrolador para programação |

## \* **Esquema de Montagem** :

- Conecte o LED vermelho ao pino digital 13 do ESP32, o LED amarelo ao pino digital 27 e o LED verde ao pino digital 32.
- Em cada LED, conecte um resistor entre o ânodo (terminal positivo) do LED e o pino digital correspondente no ESP32.
- Conecte o cátodo (terminal negativo) de cada LED ao GND (terra) do ESP32.

## \* **Dicas para Montagem** :

- Verifique a polaridade dos LEDs (geralmente o terminal mais longo é o ânodo).
- Organize os fios na protoboard para manter a visualização clara e evitar curto-circuitos.

## Relato

Para a montagem do semáforo, conectei os LEDs vermelho, amarelo e verde aos pinos digitais 13, 27 e 32 do Arduino, respectivamente. Cada LED foi acompanhado de um resistor de 220Ω para limitar a corrente e proteger os LEDs. A protoboard foi organizada de forma a facilitar a visualização do circuito e a troca de componentes, caso necessário.

## Link de imagem e vídeo

Imagem: https://drive.google.com/file/d/1lINbBDvYihk2MatyDaeMgQqE4a_TqFw6/view?usp=sharing

Vídeo: https://drive.google.com/file/d/1iMMVYBxFoep67azjy_wp9XQV61YbFEx5/view?usp=sharing

# Parte 3: Avaliação de Pares

### Avaliador: Rafael Rocha Barbosa

| Critério                                                                                                                | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota atribuída | Observações do Avaliador                                                                                                                    |
| ------------------------------------------------------------------------------------------------------------------------ | ------------------ | ------------------------------- | ----------------------- | --------------- | --------------------------------------------------------------------------------------------------------------------------------------------- |
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                              | Até 3             | Até 1,5                        | 0                       | 3               | O projeto está funcional e organizado e tem somente um fio deixando fácil para leitura.                                                     |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                                | Até 3             | Até 1,5                        | 0                       | 3               | A temporização foi precisa e adequada conforme o design proposto.                                                                           |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3             | Até 1,5                        | 0                       | 3               | O código está bem organizado, com comentários detalhados, uso de classes e ponteiros, o que demonstra domínio de programação avançada. |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código                             | Até 1             | Até 0,5                        | 0                       | 1               | _Implementação eficaz com o uso de ponteiros e boas práticas, liberando memória com destrutores, o que eleva o nível do código._      |

_Pontuação Total: 9,8_

### Avaliador: Felipe Gutierres Zillo

| Critério                                                                                                                | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota atribuída | Observações do Avaliador                                                                                                                                                                                         |
| ------------------------------------------------------------------------------------------------------------------------ | ------------------ | ------------------------------- | ----------------------- | --------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                              | Até 3             | Até 1,5                        | 0                       | 2,7             | A montagem é funcional e os resistores foram utilizados corretamente. No entanto, uma organização mais detalhada com mais fios e colocar em disposição de semaforo com o molde poderia melhorar a estética. |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                                | Até 3             | Até 1,5                        | 0                       | 3               | A temporização foi precisa e condiz com o comportamento esperado para cada fase.                                                                                                                                 |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3             | Até 1,5                        | 0                       | 2,8             | O código é funcional, comentado e aproveita ponteiros para manipular LEDs. A leitura é clara, mas alguns comentários poderiam ser mais detalhados em certas funções                                          |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código                             | Até 1             | Até 0,5                        | 0                       | 1               | O uso de ponteiros foi bem planejado e o código inclui a liberação da memória alocada, o que demonstra cuidado com a gestão de recursos                                                                       |

_Pontuação Total: 9,5_
