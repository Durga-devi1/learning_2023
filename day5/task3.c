#include <stdio.h>

typedef struct
 {
    int hours;
    int minutes;
    int seconds;
} 
Time;

Time getTime();
void printTimeDifference(Time time1, Time time2);
Time calculateTimeDifference(Time time1, Time time2);

int main()
 {
    Time time1, time2, diff;

    printf("Enter the first time period:\n");
    time1 = getTime();

    printf("Enter the second time period:\n");
    time2 = getTime();

    diff = calculateTimeDifference(time1, time2);

    printf("\nDifference between the two time periods:\n");
    printTimeDifference(time1, time2);
    printf("= ");
    printTimeDifference(diff, diff);

    return 0;
}

Time getTime()
 {
    Time time;
    printf("Enter hours: ");
    scanf("%d", &time.hours);
    printf("Enter minutes: ");
    scanf("%d", &time.minutes);
    printf("Enter seconds: ");
    scanf("%d", &time.seconds);
    return time;
}

void printTimeDifference(Time time1, Time time2)
 {
    printf("%02d:%02d:%02d - %02d:%02d:%02d", time1.hours, time1.minutes, time1.seconds, time2.hours, time2.minutes, time2.seconds);
}

Time calculateTimeDifference(Time time1, Time time2)
 {
    Time diff;

    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int difference = totalSeconds1 - totalSeconds2;

    diff.hours = difference / 3600;
    difference = difference % 3600;
    diff.minutes = difference / 60;
    diff.seconds = difference % 60;

    return diff;
}

