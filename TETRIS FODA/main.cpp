#include "game.hpp"
#include <iostream>
#include <random>
#include <ctime>

int main(int /*argc*/, char */*argv*/[])
{
  int lowerBound = 1;
  int upperBound = 500;

  // Inicializar o gerador de números aleatórios
  std::random_device rd;
  std::mt19937 gen(rd());

  // Criar a distribuição uniforme
  std::uniform_int_distribution<int> distribution(lowerBound, upperBound);

  // Gerar um número aleatório entre lowerBound e upperBound
  int randomNumber = distribution(gen);
  srand(time(NULL)* randomNumber);
  Game game;
  while (game.tick());

  return 0;
}