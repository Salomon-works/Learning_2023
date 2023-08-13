#include <stdio.h>

// Structure to represent a time period
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time difference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Convert both time periods to seconds
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    int diffSeconds = totalSeconds2 - totalSeconds1;
    if (diffSeconds < 0)
        diffSeconds = -diffSeconds;

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct Time time1, time2, diff;

    // Input the first time period
    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    // Input the second time period
    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    // Calculate the difference between the time periods
    diff = difference(time1, time2);

    // Display the difference
    printf("Difference: %d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
