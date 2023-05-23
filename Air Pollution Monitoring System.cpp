
#include <iostream>

using namespace std;

// Function to calculate Air Quality Index (AQI)
int calculateAQI(int pollutionLevel) {
    if (pollutionLevel >= 0 && pollutionLevel <= 50) {
        return 1; // Good
    } else if (pollutionLevel >= 51 && pollutionLevel <= 100) {
        return 2; // Moderate
    } else if (pollutionLevel >= 101 && pollutionLevel <= 150) {
        return 3; // Unhealthy for Sensitive Groups
    } else if (pollutionLevel >= 151 && pollutionLevel <= 200) {
        return 4; // Unhealthy
    } else if (pollutionLevel >= 201 && pollutionLevel <= 300) {
        return 5; // Very Unhealthy
    } else {
        return 6; // Hazardous
    }
}

int main() {
    int pollutionLevel;

    cout << "Enter the pollution level (PM 2.5): ";
    cin >> pollutionLevel;

    int airQualityIndex = calculateAQI(pollutionLevel);

    cout << "Air Quality Index (AQI): " << airQualityIndex << endl;

    return 0;
}









