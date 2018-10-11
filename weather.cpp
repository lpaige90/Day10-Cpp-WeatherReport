#include <iostream>

class Weather {
	private:
		int temperature;
		int humidity;

	public:
		Weather(int *temp, int *humid);
		Weather();
		int get_temperature();
		int get_humidity();
};

Weather::Weather(int *temp, int *humid) {
	temperature = *temp;
	humidity = *humid;
}

Weather::Weather() {
	temperature = 68;
	humidity = 20;
}

int Weather::get_temperature() {
	return temperature;
}

int Weather::get_humidity() {
	return humidity;
}

int main() {
	int todayTemp;
	int todayHumid;

	int *tempPointer;
	int *humidPointer;

	std::cout << "What was the temperature today? " << std::endl;
	std::cin >> todayTemp;

	std::cout << "What was the humidity today? " << std::endl;
	std::cin >> todayHumid;

	tempPointer = &todayTemp;
	humidPointer = &todayHumid;

	Weather today(tempPointer, humidPointer);

	std::cout << "The temperature you entered was: " << today.get_temperature() << std::endl;
	std::cout << "The humidity you entered was: " << today.get_humidity() << std::endl;	

	return 0;
}