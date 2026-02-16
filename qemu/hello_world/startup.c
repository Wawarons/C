#include <stdint.h>

extern int main(void);

extern void Reset_Handler(void);

__attribute__((section(".isr_vector")))
const uintptr_t vector_table[] = {
    0x20002000,
    (uintptr_t)Reset_Handler
};

void Reset_Handler(void) {
    main();
    while (1);
}
