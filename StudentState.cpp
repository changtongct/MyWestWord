#include"StudentState.h"

GoToDormitoryAndSleep* GoToDormitoryAndSleep::Instance()
{
  static GoToDormitoryAndSleep instance;

  return &instance;
}

GoToDormitoryAndSleep::Enter()
{
}

GoToDormitoryAndSleep::Execute()
{
}

GoToDormitoryAndSleep::Exit()
{
}

////////////////////////////////////////////
GoToClassroomAndStudy* GoToClassroomAndStudy::Instance()
{
  static GoToClassroomAndStudy instance;

  return &instance;
}

GoToClassroomAndStudy::Enter()
{
}

GoToClassroomAndStudy::Execute()
{
}

GoToClassroomAndStudy::Exit()
{
}

////////////////////////////////////////////
GoToCanteenAndEat* GoToCanteenAndEat::Instance()
{
  static GoToCanteenAndEat instance;

  return &instance;
}

GoToCanteenAndEat::Enter()
{
}

GoToCanteenAndEat::Execute()
{
}

GoToCanteenAndEat::Exit()
{
}