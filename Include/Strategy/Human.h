#pragma once

class Weapon;
class Human
{
public:
   Human();
   ~Human();

   virtual char* GetName();
   void Attak();
   void SetWeapon(Weapon* in_pWeapon);

private:
   Weapon* m_pWeapon;
};

class Warrior : public Human
{
public:
   char* GetName() override;
};

class Clerk : public Human
{
public:
   char* GetName() override;
};

class Rapper : public Human
{
public:
   char* GetName() override;
};