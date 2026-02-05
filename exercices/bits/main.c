#include <stdint.h>
#include <stdio.h>
#include <time.h>

int find_LSB(uint8_t value) { return value & 1; }

int find_MSB(uint8_t value) { return (value >> 7) & 1; }

int find_nth_bit(uint8_t value, uint8_t nth) { return (value >> nth) & 1; }

int set_nth_bit(uint8_t value, uint8_t nth) {
  int new_value = value | (1 << nth);
  printf("La nouvelle valeur est %d.\n", new_value);
  return new_value;
}

int clear_nth_bit(uint8_t value, uint8_t nth) {
    uint8_t new_value = value & (~(1 << nth));
    return new_value;
}

int main() {

  uint8_t tmp;
  uint8_t user_value = 0;
  uint8_t nth = 2;

  printf("Saisir votre valeur (0 et 255)\n");

  if (scanf("%hhu", &tmp) != 1 || tmp < 0 || tmp > 255) {
    printf("Valeur invalide\n");
    return -1;
  }

  user_value = tmp;

  clear_nth_bit(user_value, nth);

  return 0;
}
