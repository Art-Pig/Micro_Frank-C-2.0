#include <stdio.h>
void find_fifty(void);
int main() 
{

	struct esp8266 
	{

		char wifi_name[20];
		char wifi_password[20];
		char mode; //mode=1Îª2.4G£¬=2Îª5G

	};

	struct esp8266 esp1 = { "artPig","lb1910",5 };

	return 0;


}

/**/

void find_fifty(void) 
{

	char arr[100];
	char anwser[2];
	
	for (int i = 0; i < 100; i++)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	
		arr[i] = i;
	}

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
	{


		if (i % 9 == 0)
		{
		
			printf("\n");
		}
		else if(i == (sizeof(arr) / sizeof(arr[0]) - 1))
		{
		
			printf("%c}", arr[i]);
			
		}
		else if (i == 0)
		{
		
			printf("\n{%c\,", arr[i]);

		}
		else
		{
		
			printf("\n%c\,", arr[i]);
		}
		
	}

	char flag_i = (sizeof(arr) / sizeof(arr[0])) / 2;

	if (arr[flag_i]	== 50) {

		anwser[0] = arr[flag_i];
		return;
	}
	else if(flag_i > 50) 
	{
	
		for (int i = flag_i / 2; i > 0; i = i / 2)
		{
			
			if (arr[flag_i] + arr[i] == 50)
			{
			
				
			
			
			}
		
		}
	
	
	}
	else {
	
	
	
	
	
	
	}


}
