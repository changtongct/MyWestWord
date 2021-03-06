template <class entity_type>
class StateMachine
{

private:

  entity_type*          m_pOwner;

  State<entity_type>*   m_pCurrentState;  

public:

  StateMachine(entity_type* owner):m_pOwner(owner),
                                   m_pCurrentState(NULL),
  {}

  virtual ~StateMachine(){}

  void SetCurrentState(State<entity_type>* s){m_pCurrentState = s;}

  void  Update()const
  {
    if (m_pCurrentState) m_pCurrentState->Execute(m_pOwner);
  }

  //change to a new state
  //void  ChangeState(State<entity_type>* pNewState)
  //{
  //  assert(pNewState && 
  //         "<StateMachine::ChangeState>: trying to change to NULL state");

  //  //keep a record of the previous state
  //  m_pPreviousState = m_pCurrentState;

  //  //call the exit method of the existing state
  //  m_pCurrentState->Exit(m_pOwner);

  //  //change state to the new state
  //  m_pCurrentState = pNewState;

  //  //call the entry method of the new state
  //  m_pCurrentState->Enter(m_pOwner);
  //}

  //change state back to the previous state
  //void  RevertToPreviousState()
  //{
  //  ChangeState(m_pPreviousState);
  //}

  //returns true if the current state's type is equal to the type of the
  //class passed as a parameter. 
  /*bool  isInState(const State<entity_type>& st)const
  {
    return typeid(*m_pCurrentState) == typeid(st);
  }

  State<entity_type>*  CurrentState()  const{return m_pCurrentState;}
  State<entity_type>*  GlobalState()   const{return m_pGlobalState;}
  State<entity_type>*  PreviousState() const{return m_pPreviousState;}*/
}