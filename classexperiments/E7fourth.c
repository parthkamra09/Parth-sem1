#include <stdio.h>
#include <string.h>

union Address {
    char name;
    char home_address;
    char hostel_address;
    char city;
    char state;
    char zip;
};

int main() {
    union Address addr;

    printf("Present Address Details\n");

    strcpy(addr.name, "Parth Kamra");
    printf("Name: %s\n", addr.name);

    strcpy(addr.home_address, "900, Model town soniapt");
    printf("Home Address: %s\n", addr.home_address);

    strcpy(addr.city, "Sonipat");
    printf("City : %s\n", addr.city);

    strcpy(addr.state, "Haryana");
    printf("State : %s\n", addr.state);

    strcpy(addr.zip, "131001");
    printf("ZIP Code : %s\n", addr.zip);

    return 0;
}
