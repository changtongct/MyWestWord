#include"BaseGameEntity.h"
#include"Locations.h"
#include"StateMachine.h"
#include"StudentState.h"

const int Max_Hungry = 3;
const int Max_Fatigue = 5;

class Student:BaseGameEntity
{

private:
	StateMachine<Student>*	m_pStateMachine;
  
	Locations				m_Location;

	int						m_iHungry;
	int						m_iFatigue;

public:
	Student(int id):BaseGameEntity(id),
					m_Location(Dormitory),
					m_iHungry(0),
					m_iFatigue(0)
	{
		m_pStateMachine = new StateMachine<Student>(this);
		m_pStateMachine->SetCurrentState(GoToDormitoryAndSleep::Instance());
	}
	
	~Student(){delete m_pStateMachine;}
	
	void Update();

	StateMachine<Student>*  GetFSM()const{return m_pStateMachine;}

	locations	Location()const{return m_Location;}
	void        ChangeLocation(const locations loc){m_Location=loc;}
    
	//int         GoldCarried()const{return m_iGoldCarried;}
	//void        SetGoldCarried(const int val){m_iGoldCarried = val;}
	//void        AddToGoldCarried(const int val);
	//bool        PocketsFull()const{return m_iGoldCarried >= MaxNuggets;}

	//bool        Fatigued()const;
	//void        DecreaseFatigue(){m_iFatigue -= 1;}
	//void        IncreaseFatigue(){m_iFatigue += 1;}

	//int         Wealth()const{return m_iMoneyInBank;}
	//void        SetWealth(const int val){m_iMoneyInBank = val;}
	//void        AddToWealth(const int val);

	//bool        Thirsty()const; 
	//void        BuyAndDrinkAWhiskey(){m_iThirst = 0; m_iMoneyInBank-=2;}

	void	Eat(){m_iHungry--;}
	bool	FinishedEating{return m_iHungry>=4;}
	void	Sleep(){m_iFatigue--;}
	bool	FinishedSleeping{return m_iFatigue>=6;}
}