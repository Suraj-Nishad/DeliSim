
#ifndef _MATRIX_2_2_H_
#define _MATRIX_2_2_H_

namespace Engine
{
	class Matrix2x2
	{
	public:
		FORCE_INLINE Matrix2x2 ( void );
		FORCE_INLINE Matrix2x2 ( const Matrix2x2& );
		FORCE_INLINE Matrix2x2 ( const ftype* );

		// Setters - Translation
		FORCE_INLINE bool setTranslation ( const ftype = 0, const ftype = 0 );
		FORCE_INLINE bool setTranslation ( const Vector2d& );

		// Setters - Scaling
		FORCE_INLINE bool setScale ( const ftype = 0, const ftype = 0 );
		FORCE_INLINE bool setScale ( const Vector2d& );

		// Setters - Rotation
		FORCE_INLINE bool setRotation ( const ftype = 0 );

		// Modders
		FORCE_INLINE void translate ( const Vector2d& );
		FORCE_INLINE void scale ( const Vector2d& );

		// Getters - Translation
		FORCE_INLINE Vector2d	getTranslation ( void ) const;

		// Getters - Rotation
		FORCE_INLINE ftype		getEulerAngle ( void ) const;

		// Getters - Scale
		FORCE_INLINE Vector2d	getScaling ( void ) const;

		// Operations
		FORCE_INLINE Matrix2x2 transpose ( void ) const;
		FORCE_INLINE Matrix2x2 inverse ( void ) const;
		FORCE_INLINE ftype det ( void ) const;

		FORCE_INLINE Matrix2x2 LerpTo( Matrix2x2 const&, ftype const ) const;
		FORCE_INLINE void Lerp ( Matrix2x2 const&, ftype const ); 

		// Multiplication
		FORCE_INLINE Matrix2x2 operator* ( Matrix2x2 const& ) const;
		FORCE_INLINE Matrix2x2 operator*=( Matrix2x2 const& );
		FORCE_INLINE Matrix2x2 operator* ( ftype const ) const;

		FORCE_INLINE Matrix2x2 operator+ ( Matrix2x2 const& ) const;
		FORCE_INLINE Matrix2x2 operator+=( Matrix2x2 const& );

		FORCE_INLINE Vector2d operator* ( Vector2d const& ) const;

		// Transpose
		FORCE_INLINE Matrix2x2 operator! ( void ) const;

		// Accessor
		FORCE_INLINE const ftype* operator[] ( int ) const;
		// Editor
		FORCE_INLINE ftype* operator[] ( int );

		//Equal comparison overload
		FORCE_INLINE bool operator== (Matrix2x2 const& right) const;

		//Not equal comparison overload
		FORCE_INLINE bool operator!= (Matrix2x2 const& right) const;

	public:
		ftype pData [4];
	};
};

#endif//_MATRIX_2_2_H_