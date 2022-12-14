#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * ng from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	
	int hour, minute;

	
	for (hour = 0; hour <= 23; hour++)
	{
		
		for (minute = 0; minute <= 59; minute++)
                {

	                  _putchar((hour / 10) + '0');
			  _putchar((hour % 10) + '0');
			  _putchar(':');
			  _putchar((minute / 10) + '0');
			  _putchar((minute % 10) + '0');
		}	  _putchar('\n');
	}

}


