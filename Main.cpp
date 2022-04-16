#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Mail.h"
int main()
{
	Initialize(); //Remove or comment this line after first successful run
	fillData(); //Remove or comment this line after Second successful run
	//AFter Second run clear everything from main method and use SendMail(0);
	SendMail(0);
}
