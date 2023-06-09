

#pragma once



#include <glm/glm.hpp>



class  Object
{

protected:

	glm::vec3 orientation = glm::vec3(0.0f);
	glm::vec3 position = glm::vec3(0.0f);


public:

	Object()
	{}



	glm::vec3 getPosition()
	{
		return position;
	}


	glm::vec3 getOrientation()
	{
		return orientation;
	}


	void updatePosition(float x, float y, float z)
	{
		position = glm::vec3
		(
			position.x + x,
			position.y + y,
			position.z + z
		);
	}


	void updateOrientation(float x, float y, float z)
	{
		orientation = glm::vec3
		(
			orientation.x + x,
			orientation.y + y,
			orientation.z + z
		);
	}

};
