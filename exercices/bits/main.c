#include <stdint.h>
#include <stdio.h>

int find_LSB(uint8_t value) {
    return (value >> 0) & 1;
}
int main() {
    uint8_t user_value = 0;
    printf("Saisir votre valeur (0 et 255): ");
    if(scanf("%hhu",&user_value) != 1) return -1;
    uint8_t lsb = find_LSB(user_value);
    printf("Le LSB de %d est %d",user_value, lsb);
    return 0;
}
