#include "lib/utils/utils.h"
#include "lib/start/menu.h"
#include "lib/game/game.h"

int main()
{
	hideCursor(1); srand(time(0));
	
	while (true)
	{
		TITLE();
		GAME();
	}
	return 0;
}
