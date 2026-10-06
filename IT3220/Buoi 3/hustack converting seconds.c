#include <stdio.h>

int main()
{
    int totalSeconds;
    scanf("%d", &totalSeconds);
    
    int hour = totalSeconds/3600;
    int remaining = totalSeconds - 3600*hour;
    int minutes = remaining/60;
    int seconds = remaining%60;

	printf("%d %d %d", hour, minutes, seconds);
	return 0;
}
