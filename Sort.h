#ifndef SORT_H
#define SORT_H

class Sort
{
   public:
      Sort();
      ~Sort(){};
      virtual void sort(){};
      void exchange(int&, int&);
   private:
};
#endif