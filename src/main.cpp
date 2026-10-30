
#include <mod/amlmod.h>

MYMOD(
    BilalGTAVI,
    Bilal GTA VI Mobile Menu,
    0.1.0,
    Bilal
);

NEEDGAME(com.rockstargames.gtasa);

ON_MOD_LOAD()
{
    if (aml)
    {
        aml->ShowToast(false, "Bilal GTA VI Menu Loaded!");
    }
}
