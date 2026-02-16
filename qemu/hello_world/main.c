#include <stdint.h>

#define UART0_DR (*(volatile uint32_t*)0x4000C000)
#define UART0_FR (*(volatile uint32_t*)0x4000C018)

void uart_send(char c) {
    while (UART0_FR & (1 << 5));
    UART0_DR = c;
}

void uart_print(const char *str) {
    while (*str)
        uart_send(*str++);
}

int main(void) {
    uart_print("Hello world");
    while(1);
}
