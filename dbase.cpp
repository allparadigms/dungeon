#include "includes.h"

using namespace std;

void dbase::dbmain()
{
    cout << "Dbmain";
    while (!quit)
    {
	usleep(1000000);
	quit  = 1;


    } // end !quit
}
