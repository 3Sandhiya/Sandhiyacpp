/*WEATHER APP (BACKEND CODE)

NAME:D.Sandhiya
COLLEGE NAME:V.S.B. ENGINEERING COLLEGE

CONCEPTS USED:
In this code, we have a Weather class that represents the weather information.
It has private member variables such as location, date, condition, temperature, humidity, and rainPossibility.
The constructor is used to initialize these variables.

The displayWeather() method is used to display the weather information for a specific date.
*/

#include<iostream>
#include <string>

using namespace std;

// Weather class to store weather data
class Weather {
private:
    string location;
    string date;
    string condition;
    double temperature;
    double humidity;
    double rainPossibility;

public:
    // Constructor
    Weather(string loc, string dt, string cond, double temp, double hum, double rain) {
        location = loc;
        date = dt;
        condition = cond;
        temperature = temp;
        humidity = hum;
        rainPossibility = rain;
    }

    // Display weather information
    void displayWeather() {
        cout << "Location: " << location << endl;
        cout << "Date: " << date << endl;
        cout << "Condition: " << condition <<endl;
        cout << "Temperature: " << temperature << " C" <<endl;
        cout << "Humidity: " << humidity << "%" << std::endl;
        cout << "Rain Possibility: " << rainPossibility << "%" << endl;
    }
};

// Function to get weather information based on user input
void getWeatherInformation() {
    string location;
    cout << "Enter location: ";
    cin >> location;

    string date;
    cout << "Enter date (e.g., Today, Yesterday, Tomorrow, Week, Month): ";
    cin >> date;

    // Create Weather objects based on user input
    Weather todayWeather(location, "Today", "Cloudy", 25.0, 70.0, 30.0);
    Weather yesterdayWeather(location, "Yesterday", "Rain", 20.0, 80.0, 60.0);
    Weather tomorrowWeather(location, "Tomorrow", "Sunny", 30.0, 60.0, 10.0);
    Weather weekWeather(location, "Week", "Mixed", 28.0, 65.0, 40.0);
    Weather monthWeather(location, "Month", "Thunderstorm", 22.0, 75.0, 50.0);

    // Display weather information based on user input
    if (date == "Today") {
        todayWeather.displayWeather();
    } else if (date == "Yesterday") {
        yesterdayWeather.displayWeather();
    } else if (date == "Tomorrow") {
        tomorrowWeather.displayWeather();
    } else if (date == "Week") {
        
            weekWeather.displayWeather();
        }
    } else if (date == "Month") {
        
            monthWeather.displayWeather();
        }
    } else {
        cout << "Invalid date entered!" << std::endl;
    }
}

int main() {
    getWeatherInformation();
    return 0;
}


