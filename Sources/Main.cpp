#include <stdio.h>

#include "Strategy/Human.h"
#include "Strategy/Weapon.h"

int main()
{
   Human* l_Human = new Warrior();

   printf("Hi %s\r\n", l_Human->GetName());

   l_Human->Attak();
   l_Human->SetWeapon(new Sword());
   l_Human->Attak();
   l_Human->SetWeapon(new Arbalet());
   l_Human->Attak();

   return 0;
}