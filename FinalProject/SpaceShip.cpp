/***************************************************************
** Author: Chunghee Kim
** Date: 12/01/2019
** Description: Implementation file for SpaceShip class
******************************************************************/

#include "SpaceShip.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/****************************************************************************************
** Description: SpaceShip::SpaceShip() default constructor for SpaceShip object
*******************************************************************************************/
SpaceShip::SpaceShip()
{
    this->spaceName = "Space Ship";
    this->spaceType = "SpaceshipSpace";
    this->counter = 0;
}

/****************************************************************************************
** Description: SpaceShip::~SpaceShip() destructor for SpaceShip object
*******************************************************************************************/
SpaceShip::~SpaceShip()
{
}

/****************************************************************************************
** Description: SpaceShip::getTop() returns the Top space  of the current space
*******************************************************************************************/
Space *SpaceShip::getTop()
{
    return this->top;
}

/*************************************************************************************
** Description: SpaceShip::setTop() sets the Top space of the current space
***************************************************************************************/
void SpaceShip::setTop(Space* space)
{
    this->top = space;
}

/************************************************************************************************
** Description: SpaceShip::getBottom() returns the Bottom space of the current space
**************************************************************************************************/
Space *SpaceShip::getBottom()
{
    return this->bottom;
}

/********************************************************************************************
** Description: SpaceShip::setBottom() sets the Bottom space of the current space
**********************************************************************************************/
void SpaceShip::setBottom(Space* space)
{
    this->bottom = space;
}

/****************************************************************************************
** Description: SpaceShip::getLeft() returns the Left space of the current space
******************************************************************************************/
Space *SpaceShip::getLeft()
{
    return this->left;
}

/*************************************************************************************
** Description: SpaceShip::setLeft() sets the Left space of the current space
***************************************************************************************/
void SpaceShip::setLeft(Space* space)
{
    this->left = space;
}

/********************************************************************************************
** Description: SpaceShip::getRight() returns the Right space of the current space
**********************************************************************************************/
Space *SpaceShip::getRight()
{
    return this->right;
}

/****************************************************************************************
** Description: SpaceShip::setRight() sets the Right space of the current space
******************************************************************************************/
void SpaceShip::setRight(Space* space)
{
    this->right = space;
}

/********************************************************************************************
** Description: SpaceShip::getCurrentSpace() returns the current space
**********************************************************************************************/
Space *SpaceShip::getCurrentSpace()
{
    return this;
}

/********************************************************************************************
** Description: SpaceShip::getSpaceName() gets the current space name
**********************************************************************************************/
std::string SpaceShip::getSpaceName()
{
    return this->spaceName;
}

/********************************************************************************************
** Description: SpaceShip::getSpaceType() returns the type of current space
**********************************************************************************************/
string SpaceShip::getSpaceType()
{
    return this->spaceType;
}

/********************************************************************************************
** Description: SpaceShip::getCounter returns the counter member variable
**********************************************************************************************/
int SpaceShip::getCounter()
{
    return this->counter;
}

/********************************************************************************************
** Description: SpaceShip::performSpaceAction() returns the type of current space
**********************************************************************************************/
void SpaceShip::performSpaceAction()
{
    cout << "The spaceship looks rough around the edges but seems functional. Right now there seems to be 1 out of 5 jetfuel cells. Looks like we need 4 more fuel cells. Also there's a weird text on the screen that seems like we need to decipher" << endl;
    cout << "'bx uxwp jwm cqjwtb oxa juu cqn orbq'" << endl;
}

/********************************************************************************************
** Description: SpaceShip::getItem() returns Item member variable associated with the space
**********************************************************************************************/
Item SpaceShip::getItem()
{
    return this->item;
}

/********************************************************************************************
** Description: SpaceShip::setItem() sets the item member variable associated with the space
**********************************************************************************************/
void SpaceShip::setItem(Item &itm)
{
    this->item = itm;
}

/************************************************************************************************
** Description: SpaceShip::getJetFuel() returns jetFuel member variable associated with the space
**********************************************************************************************/
Item SpaceShip::getJetFuel()
{
    return this->jetFuel;
}

/************************************************************************************************
** Description: SpaceShip::setJetFuel sets the jetFuel member variable associated with the space
**********************************************************************************************/
void SpaceShip::setJetFuel(Item &itm)
{
    this->jetFuel = itm;
}
