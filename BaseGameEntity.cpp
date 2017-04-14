#include "BaseGameEntity.h"

void BaseGameEntity::SetID(int val)
{
  //make sure the val is equal to or greater than the next available ID
  //assert ( (val >= m_iNextValidID) && "<BaseGameEntity::SetID>: invalid ID");

  m_ID = val;
    
  m_iNextValidID = m_ID + 1;
}