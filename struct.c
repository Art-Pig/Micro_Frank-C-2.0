#include <stdio.h>

int main() {

	struct esp8266 {

		char wifi_name[20];
		char wifi_password[20];
		char mode; //mode=1Ϊ2.4G��=2Ϊ5G

	};

	struct esp8266 esp1 = { "artPig","lb1910",5 };

	return 0;


}