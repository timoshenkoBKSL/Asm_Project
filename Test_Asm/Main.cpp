#include "Main.h"


int main(void)
{
	Test_Command();
	
	AsCommander Commander;

	if (!Commander.Init())
		return -1;

	Commander.Run();

	return 0;
}
