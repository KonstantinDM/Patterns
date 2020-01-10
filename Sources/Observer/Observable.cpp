#include "Observer/Observable.h"
#include "Observer/Observer.h"

Observable::Observable()
{
   m_pObservers = new Observers();
}

Observable::~Observable()
{
   delete m_pObservers;
}

void Observable::AddObserver(Observer* in_pObserver)
{
   if(in_pObserver)
   {
      bool l_bFound = false;
      for(Observers::iterator it = m_pObservers->begin(); it != m_pObservers->end(); ++it)
      {
         if(*it == in_pObserver)
         {
            l_bFound = true;
            break;
         }
      }

      if(!l_bFound)
         m_pObservers->push_back(in_pObserver);
   }
}

void Observable::DeleteObserver(Observer* in_pObserver)
{
   for(Observers::iterator it = m_pObservers->begin(); it != m_pObservers->end(); /*incrace in cycle*/)
   {
      if(*it == in_pObserver)
      {
         it = m_pObservers->erase(it);
         break;
      }
      else
      {
         ++it;
      }
   }
}

void Observable::Notify()
{
   for(auto l_pObserver : *m_pObservers)
      l_pObserver->Update();
}
