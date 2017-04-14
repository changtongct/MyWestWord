#include"State.h"
#include"Student.h"

class Student;///////////////////////////////

class GoToDormitoryAndSleep:State<Student>
{
private: 
  GoToDormitoryAndSleep(){}

  GoToDormitoryAndSleep(const GoToDormitoryAndSleep&);
  GoToDormitoryAndSleep& operator=(const GoToDormitoryAndSleep&);
 
public:
  static GoToDormitoryAndSleep* Instance();

  virtual void Enter(Student* miner);
  virtual void Execute(Student* miner);
  virtual void Exit(Student* miner);
}


class GoToClassroomAndStudy:State<Student>
{
private: 
  GoToClassroomAndStudy(){}

  GoToClassroomAndStudy(const GoToClassroomAndStudy&);
  GoToClassroomAndStudy& operator=(const GoToClassroomAndStudy&);
 
public:
  static GoToClassroomAndStudy* Instance();

  virtual void Enter(Student* miner);
  virtual void Execute(Student* miner);
  virtual void Exit(Student* miner);
}


class GoToCanteenAndEat:State<Student>
{
private: 
  GoToCanteenAndEat(){}

  GoToCanteenAndEat(const GoToCanteenAndEat&);
  GoToCanteenAndEat& operator=(const GoToCanteenAndEat&);
 
public:
  static GoToCanteenAndEat* Instance();

  virtual void Enter(Student* miner);
  virtual void Execute(Student* miner);
  virtual void Exit(Student* miner);
}
