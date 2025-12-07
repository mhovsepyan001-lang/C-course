#include <stdio.h>

union Sensor {
    int temp;
    float pres;
    float hum;
};

int main() {
    union Sensor s;
    int choice;

    printf("Choose sensor: 1-Temp 2-Pressure 3-Humidity: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter temperature: ");
        scanf("%d", &s.temp);
        printf("Temperature: %d\n", s.temp);
    } else if(choice == 2){
        printf("Enter pressure: ");
        scanf("%f", &s.pres);
        printf("Pressure: %.2f\n", s.pres);
    } else if(choice == 3){
        printf("Enter humidity: ");
        scanf("%f", &s.hum);
        printf("Humidity: %.2f\n", s.hum);
    } else {
        printf("Invalid type\n");
    }

    return 0;
}
