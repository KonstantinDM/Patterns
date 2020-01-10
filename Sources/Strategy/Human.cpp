#include "Strategy/Human.h"
#include "Strategy/Weapon.h"


Human::Human()
{
   m_pWeapon = new Weapon();
}

Human::~Human()
{
   delete m_pWeapon;
}

char* Human::GetName()
{
   return "No name";
}

void Human::Attak()
{
   m_pWeapon->Attak();
}

void Human::SetWeapon(Weapon* in_pWeapon)
{
   if(in_pWeapon)
   {
      delete m_pWeapon;
      m_pWeapon = in_pWeapon;
   }
}

char* Warrior::GetName()
{
   return "Anton";
}

char* Clerk::GetName()
{
   return "Nick";
}

char* Rapper::GetName()
{
   return "Feder";
}
