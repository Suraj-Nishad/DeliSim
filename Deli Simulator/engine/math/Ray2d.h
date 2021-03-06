#ifndef _RAY_2D_H_
#define _RAY_2D_H_

#include "Vector2d.h"

class Ray2d
{
public:
	Ray2d ( const Vector2d& npos, const Vector2d& ndir ) : pos(npos), dir(ndir) {}
	Ray2d ( void ) : pos(0,0), dir(0,0) {}

	static Ray2d FromSegment ( const Vector2d& source, const Vector2d& target )
	{
		return Ray2d( source, target-source );
	}

	// return parametric value of collision of this ray
	ftype CollideRay ( const Ray2d& other ) const
	{
		//ftype dx = bs.x - as.x
		//ftype dy = bs.y - as.y
		Vector2d delta = other.pos - pos;
		//det = bd.x * ad.y - bd.y * ad.x
		ftype det = other.dir.cross(dir);
		//u = (dy * bd.x - dx * bd.y) / det
		//v = (dy * ad.x - dx * ad.y) / det
		return (delta.y * other.dir.x - delta.x * other.dir.y) / det;
	}

public:
	Vector2d pos;
	Vector2d dir;
};


#endif//_RAY_2D_H_