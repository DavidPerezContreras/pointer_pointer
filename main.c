#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void print_string(char **string_variable){
    printf("%s\n",*string_variable);
    *string_variable = "Hello world after print_string call";
}

int main() {

    char *string_variable ="Hello world";

    print_string(&string_variable);

    printf("%s\n",string_variable);

return EXIT_SUCCESS;
}
