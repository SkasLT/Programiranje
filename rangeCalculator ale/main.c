#ifdef _WIN32
#define CLEAR_CMD "cls"
#else
#define CLEAR_CMD "clear"
#endif

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef enum
{
  CALCULATE_PERCENTAGE = 1,
  CALCULATE_VALUE = 2,
  NONE = 0
} CalculationChoices;

typedef enum
{
  CALCULATE_SINGLE = 1,
  CALCULATE_MULTI = 2,
  EXIT = 0
} ValueChoices;

void update(bool *running);

void calculatePercentage();
void calculateValue();
void calculateValueSingle();
void calculateValueMulti();

int main()
{
  bool running = true;

  while (running)
    update(&running);

  return EXIT_SUCCESS;
}

void update(bool *running)
{
  CalculationChoices choice = NONE;

  const char line[256] = "\0";

  printf("[1] Calculate percentage\n");
  printf("[2] Calculate value\n\n");
  printf("> ");
  scanf(" %[^\n]", &line);

  bool success = sscanf(line, " %d", &choice);

  system(CLEAR_CMD);

  if (strcmp(line, "exit") == 0)
  {
    printf("Goodbye! Exiting...");

    sleep(1);

    (*running) = false;
    return;
  }

  switch (choice)
  {
  case CALCULATE_PERCENTAGE:
    calculatePercentage();
    break;
  case CALCULATE_VALUE:
    calculateValue();
    break;
  default:
    success = false;
    break;
  }

  if (!success)
    printf("Wrong input. Try again!\n\n");
}

/**
 * Calculates the percentage of the given number in a range
 */
void calculatePercentage()
{
  float lowerRange = 0;
  float upperRange = 0;
  float value = 0;

  bool success = true;

  do
  {
    printf("Range of values [X - Y]: ");
    success = scanf(" %f - %f", &lowerRange, &upperRange);

    printf("Value: ");
    success = scanf(" %f", &value);

    system(CLEAR_CMD);

    if (!success)
      printf("Wrong input. Try again!\n\n");

  } while (!success);

  const float delta = upperRange - lowerRange;

  printf("\n---------Result---------\n");
  printf("Input min: %.2f\n", lowerRange);
  printf("Input max: %.2f\n", upperRange);
  printf("Input value: %.2f\n\n", value);
  printf("Calculated percentage: %.2f%%\n",
         ((value - lowerRange) * 100) / delta);
  printf("-------------------------\n\n");
}

/**
 * Calculates single or multiple values of the given percentage in a range
 */
void calculateValue()
{
  ValueChoices choice = EXIT;

  const char line[256] = "\0";

  bool success = true;

  do
  {
    printf("[1] Single value\n");
    printf("[2] Multiple values\n\n");
    printf("> ");

    scanf(" %[^\n]", &line);

    system(CLEAR_CMD);

    if (strcmp(line, "exit") == 0)
      break;

    success = sscanf(line, " %d", &choice);

    system(CLEAR_CMD);

    switch (choice)
    {
    case CALCULATE_SINGLE:
      calculateValueSingle();
      break;

    case CALCULATE_MULTI:
      calculateValueMulti();
      break;
    default:
      success = false;
    }

    if (!success)
      printf("Wrong input. Try again!\n\n");
  } while (!success);
}

/**
 * Calculates single value of the given percentage in a range
 */
void calculateValueSingle()
{
  float lowerRange = 0;
  float upperRange = 0;
  float percentage = 0;

  bool success = true;

  do
  {
    printf("Range of values [X - Y]: ");
    success = scanf(" %f - %f", &lowerRange, &upperRange);

    printf("Percentage: ");
    success = scanf(" %f", &percentage);

    system(CLEAR_CMD);

    if (!success)
      printf("Wrong input. Try again!\n\n");
  } while (!success);

  const float delta = upperRange - lowerRange;

  printf("--------Result---------\n");
  printf("Input min: %.2f\n", lowerRange);
  printf("Input max: %.2f\n", upperRange);
  printf("Input percentage: %.2f%%\n\n", percentage);
  printf("Calculated value: %.2f\n", (percentage * delta / 100) + lowerRange);
  printf("-------------------------\n\n");
}

/**
 * Calculates multiple values of the given percentage in a range
 */
void calculateValueMulti()
{
  float lowerRange = 0;
  float upperRange = 0;

  bool success = true;

  do
  {
    printf("Range of values [X - Y]: ");
    success = scanf(" %f - %f", &lowerRange, &upperRange);

    system(CLEAR_CMD);

    if (!success)
      printf("Wrong input. Try again!\n\n");
  } while (!success);

  const float delta = upperRange - lowerRange;

  printf("---------Calculated values---------\n");
  printf("Input min: %.2f\n", lowerRange);
  printf("Input max: %.2f\n\n", upperRange);

  for (int i = 0; i <= 100; i += 10)
    printf("Value at %d%%: %.2f\n", i, (i * delta / 100) + lowerRange);

  printf("-----------------------------------\n\n");
}