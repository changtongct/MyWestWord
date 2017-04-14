#include"Student.h"

void Student:Update()
{
	m_iHungry++;
	m_iFatigue++;

	m_pStateMachine->Update();
}