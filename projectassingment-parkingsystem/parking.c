#include <stdio.h>

void main() {
    char vehicleNumber[20];
    int entryHour, entryMinute, exitHour, exitMinute;
    int totalHours, totalMinutes;
    int charge;

    printf("Enter Vehicle Number: ");
    scanf("%s", vehicleNumber);

    printf("Enter Entry Time (HH MM): ");
    scanf("%d %d", &entryHour, &entryMinute);

    printf("Enter Exit Time (HH MM): ");
    scanf("%d %d", &exitHour, &exitMinute);

    totalMinutes = (exitHour * 60 + exitMinute) - (entryHour * 60 + entryMinute);

    if (totalMinutes < 0) {
        printf("Error: Exit time cannot be earlier than entry time.\n");
        return;
    }

    totalHours = totalMinutes / 60;

    if (totalHours <= 2) {
        charge = totalHours * 5;
    } else {
        charge = 2 * 5 + (totalHours - 2) * 3;
    }

    printf("----- Parking Bill -----\n");
    printf("Vehicle Number: %s\n", vehicleNumber);
    printf("Total Duration: %d hours\n", totalHours);
    printf("Total Amount: $%d\n", charge);
}