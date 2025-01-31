#include <stdio.h>
void main()
{
    int mm;
    int m, cm, rem_mm;
    printf("Enter length in millimeters: ");
    scanf("%d", &mm);
    // Convert millimeters to meters, centimeters, and remaining millimeters
    m = mm / 1000; // 1 meter = 1000 millimeters
    cm = (mm % 1000) / 10; // 1 centimeter = 10 millimeters
    rem_mm = mm % 10; // Remaining millimeters
    printf("Length in meters: %d m\n", m);
    printf("Length in centimeters: %d cm\n", cm);
    printf("Remaining millimeters: %d mm\n", rem_mm);
}