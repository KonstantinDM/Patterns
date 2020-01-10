#pragma once
#include <vector>

class Observer;
typedef std::vector<Observer*> Observers;
class Observable
{
public:
   Observable();
   ~Observable();

   void AddObserver(Observer* in_pObserver);
   void DeleteObserver(Observer* in_pObserver);

protected:
   void Notify();

private:
   Observers* m_pObservers;
};