#ifndef SORT_H
#define SORT_H

class Sort
{
   public:
      Sort();
      ~Sort(){};
      virtual void exec(){};
      void exchange(int&, int&);
   private:
};
#endif