#include "Strategy/Weapon.h"
#include <stdio.h>

char* Weapon::GetName()
{
   return "Hands\r\n";
}

void Weapon::Attak()
{
   printf("Hit!\r\n");
}

char* Sword::GetName()
{
   return "Sword\r\n";
}

void Sword::Attak()
{
   printf("Wish!\r\n");
}

char* Gun::GetName()
{
   return "Gun\r\n";
}

void Gun::Attak()
{
   printf("Piu! Piu!\r\n");
}

char* Arbalet::GetName()
{
   return "Arbalet\r\n";
}

void Arbalet::Attak()
{
   printf("Whoop!\r\n");
}
