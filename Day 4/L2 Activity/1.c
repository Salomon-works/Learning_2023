#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent sensor information
struct SensorInfo {
    char sensorID[3];
    float temperature;
    int humidity;
    int lightIntensity;
};

// Function to populate sensor information from the data string
void populateSensorInfo(struct SensorInfo *sensor, const char *data) {
    char sensorID[3];
    float temperature;
    int humidity;
    int lightIntensity;

    // Extract sensor ID using sscanf
    sscanf(data, "S%2[^-]-", sensorID);
    strcpy(sensor->sensorID, sensorID);

    // Extract temperature using sscanf
    sscanf(data, "%*[^:]:%f", &temperature);
    sensor->temperature = temperature;

    // Extract humidity using sscanf
    sscanf(strstr(data, "-H:") + 3, "%d", &humidity);
    sensor->humidity = humidity;

    // Extract light intensity using sscanf
    sscanf(strstr(data, "-L:") + 3, "%d", &lightIntensity);
    sensor->lightIntensity = lightIntensity;
}

int main() {
    const char *data = "S1-T:36.5-H:100-L:50";
    struct SensorInfo sensor;

    // Populate sensor information from the data string
    populateSensorInfo(&sensor, data);

    // Display the sensor information
    printf("Sensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", sensor.sensorID);
    printf("Temperature: %.1f C\n", sensor.temperature);
    printf("Humidity: %d\n", sensor.humidity);
    printf("Light Intensity: %d%%\n", sensor.lightIntensity);

    return 0;
}
