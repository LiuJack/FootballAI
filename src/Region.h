#ifndef FOOTBALL_AI_REGION
#define FOOTBALL_AI_REGION

#include <Scene/Node.hpp>

class Region 
{
public:

	enum RegionType 
	{
		HALF_SIZE,
		NORMAL
	};                  

public:

	Region(float left, float top, float right, float bottom, int id = -1);

	/** 
	  * @param position
	  * @param type Region type
	  * @returns If the position is inside this region
	  */
	bool inside(Ogre::Vector3 position, RegionType type) const;	

	/** 
	  * @returns A random position within this region
	  */
	Ogre::Vector3 getRandomPosition() const;

	float getLeft() const;
	float getTop() const;
	float getRight() const;
	float getBottom() const;
	float getWidth() const;
	float getHeight() const;

	Ogre::Vector3 getCenter() const;

	int getID() const;


protected:

	float mLeft;
	float mTop;
	float mRight;
	float mBottom;
	float mWidth;
	float mHeight;

	Ogre::Vector3 mCenter;

	int mID;  
};

#endif