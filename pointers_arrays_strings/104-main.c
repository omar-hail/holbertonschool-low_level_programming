#include "main.h"

int main(void)
{
    char buffer[] = "Hello, this is a test buffer for print_buffer function!";
    print_buffer(buffer, sizeof(buffer) - 1);
    return (0);
}
