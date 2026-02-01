#include <stdint.h>
#include <stdio.h>

int find_LSB(uint8_t value) { return value & 1; }

int find_MSB(uint8_t value) { return (value >> 7) & 1; }

int main() {

  int8_t user_choice = 0;

  printf("MSB[0]-LSB[1]: ");
  if (scanf("%hhu", &user_choice) != 1)
    return 1;

  uint8_t user_value = 0;

  int tmp;

  printf("Saisir votre valeur (0 et 255)\n");

  if (scanf("%u", &tmp) != 1 || tmp < 0 || tmp > 255) {
    printf("Valeur invalide\n");
    return -1;
  }

  user_value = (uint8_t)tmp;
  uint8_t res = 0;

  switch (user_choice) {
  case 0:
    res = find_MSB(user_value);
    printf("Le MSB de %u est %u\n", user_value, res);
    break;
  case 1:
    res = find_LSB(user_value);
    printf("Le LSB de %u est %u:i\n", user_value, res);
    break;
  default:
    printf("Argument Invalide");
    break;
  }

  return 0;
}
