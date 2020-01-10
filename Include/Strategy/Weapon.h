class Weapon
{
public:
    virtual char* GetName();
    virtual void Attak();
};

class Sword : public Weapon
{
public:
    char* GetName() override;
    void Attak() override;
};

class Gun : public Weapon
{
public:
    char* GetName() override;
    void Attak() override;
};

class Arbalet : public Weapon
{
public:
    char* GetName() override;
    void Attak() override;
};