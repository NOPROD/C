#include <stdio.h>
#include <string.h>

int main() {
char str_a[20];
char *pointer;
char *pointer2;

strcpy(str_a, "Hello, world!\n");
pointer = str_a; // Set the first pointer to the start of the array.
printf(pointer);

pointer2 = pointer + 2;
printf(pointer2);
strcpy(pointer2,"y youguys!\n");
printf(pointer);
}
