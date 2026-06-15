# Sprint 02 – Algoritmo em Python e Simulação com Arduino

## Disciplina
Computer Science

## Curso
Ciências da Computação – 1º Ano

## Turma
[1CCPQ]

## Integrantes
| Nome | RM |
| :--- | :--- |
| Enzo Seiji Delgado Tabuchi | 573156 |
| Henrique Almeida Lucareli | 569183 |
| Leonardo Scotti Tobias | 573305 |
| Luca Almeida Lucareli | 569061 |
| Natan Silva da Costa | 573100 |

---

# Objetivo

Esta Sprint tem como objetivo transformar a lógica desenvolvida na Sprint 01 em uma implementação prática utilizando programação em Python e uma simulação física com Arduino.

A proposta é demonstrar o funcionamento de um sistema lógico por meio de entradas digitais e saídas visuais, conectando conceitos de lógica computacional, programação e eletrônica básica.

---

# Descrição do Projeto

O projeto consiste na implementação de uma lógica digital utilizando Python e C++.

A lógica é representada por entradas digitais (botões) que são processadas pelo Arduino e resultam no acionamento de LEDs indicadores.

Além da simulação física, foi desenvolvido um algoritmo em Python que reproduz o mesmo comportamento lógico utilizando estruturas condicionais.

---

# Algoritmo em Python

O código em Python foi desenvolvido para representar a lógica do circuito criado na Sprint 01, utilizando estruturas condicionais e operadores lógicos.

## Funcionalidades

- Simulação de entradas digitais.
- Processamento da lógica através de condicionais.
- Exibição dos resultados no terminal.
- Utilização de operadores lógicos (`and`, `or`, `not`).

---

# Implementação Arduino (C++)

A implementação física da lógica foi realizada utilizando Arduino Uno e programação em C++.

## Componentes Utilizados

- Arduino Uno
- Protoboard
- 8 Botões
- 2 LEDs (Verde e Vermelho)
- Resistores
- Cabos Jumper

## Funcionamento

Os botões são utilizados como entradas digitais do sistema.

O programa em C++ executado no Arduino realiza a leitura dessas entradas através da função `digitalRead()`, processa as condições lógicas utilizando estruturas `if` e `else` e controla os LEDs utilizando a função `digitalWrite()`.

As saídas visuais indicam o resultado da lógica implementada.

### Principais Funções Utilizadas

- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `if / else`
- `setup()`
- `loop()`

# Circuito

[Circuito Arduino](https://www.tinkercad.com/things/hK8SUnegA2h-sprint-2-computer-science?sharecode=puX8o4_MRpupAYtTr93fN3bZMGi_dugWgqckHY8AYlQ)

---

# Tecnologias Utilizadas

- Python 3
- Arduino IDE
- Tinkercad Circuits
- Arduino Uno
