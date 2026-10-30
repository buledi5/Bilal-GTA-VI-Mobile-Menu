
#include <mod/amlmod.h>

MYMOD(
    BilalGTAVI,
    "Bilal GTA VI Mobile Menu",
    "0.1.0",
    "Bilal"
);

NEEDGAME(com.rockstargames.gtasa);

STARTUP
{
    aml->ShowToast("Bilal GTA VI Menu Loaded!");
}
