#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct
 {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} 
LogEntry;

int readLogFile(const char* fileName, LogEntry* logEntries);
void displayLogEntries(LogEntry* logEntries, int numEntries);

int main()
 {
    LogEntry logEntries[MAX_ENTRIES];
    int numEntries = readLogFile("data.csv", logEntries);

    if (numEntries == -1) 
	{
        printf("Unable to open the log file.\n");
        return 1;
    }

    printf("Log Entries:\n");
    displayLogEntries(logEntries, numEntries);

    return 0;
}

int readLogFile(const char* fileName, LogEntry* logEntries)
 {
    FILE* file = fopen(fileName, "r");

    if (file == NULL) {
        return -1;
    }

    char line[256];
    int numEntries = 0;
    while (fgets(line, sizeof(line), file)) 
	{
        char* token = strtok(line, ",");
        if (token == NULL) 
		{
            continue;  
        }

        
        logEntries[numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].time, token);

        numEntries++;
    }

    fclose(file);
    return numEntries;
}

void displayLogEntries(LogEntry* logEntries, int numEntries)
 {
 	int i;
    for ( i = 0; i < numEntries; i++) 
	{
        printf("Entry No: %d\n", logEntries[i].entryNo);
        printf("Sensor No: %s\n", logEntries[i].sensorNo);
        printf("Temperature: %.2f\n", logEntries[i].temperature);
        printf("Humidity: %d\n", logEntries[i].humidity);
        printf("Light: %d\n", logEntries[i].light);
        printf("Time: %s\n", logEntries[i].time);
        printf("\n");
    }
}

