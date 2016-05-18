#ifndef REACTOR_ALGEBRA_VECTOR2D_HPP
#define REACTOR_ALGEBRA_VECTOR2D_HPP

#include "reactor/common/type/types.hpp"
#include "reactor/algebra/Vector2dInside.hpp"

namespace reactor { namespace algebra {

using namespace reactor::common::type;

template <typename TScalar>
class Vector2d: protected Vector2dInside<TScalar> {

public:

    /* Constructors */

    Vector2d();
    Vector2d(const Vector2d<TScalar>& vector);
    Vector2d(const Vector2d<TScalar>&& vector);
    explicit Vector2d(const TScalar x, const TScalar y);

    /* Operations */

    const Vector2d<TScalar>& operator = (const TScalar& value);
    const Vector2d<TScalar>& operator = (const Vector2d<TScalar>& vector);
    const Vector2d<TScalar>& operator = (const Vector2d<TScalar>&& vector);

    Vector2d<TScalar> operator + () const;
    Vector2d<TScalar> operator - () const;

    Vector2d<TScalar>& operator += (const Vector2d<TScalar>& vector);
    Vector2d<TScalar>& operator -= (const Vector2d<TScalar>& vector);
    Vector2d<TScalar>& operator *= (const Vector2d<TScalar>& vector);
    Vector2d<TScalar>& operator *= (TScalar value);
    Vector2d<TScalar>& operator /= (const Vector2d<TScalar>& vector);
    Vector2d<TScalar>& operator /= (TScalar value);

    TScalar& operator [] (uint index);

    int operator == (const Vector2d<TScalar>& vector);
    int operator != (const Vector2d<TScalar>& vector);

    operator TScalar * ();
    operator const TScalar * () const;

    template <typename TTScalar>
    friend Vector2d<TTScalar> operator + (const Vector2d<TTScalar>&, const Vector2d<TTScalar>&);
    template <typename TTScalar>
    friend Vector2d<TTScalar> operator - (const Vector2d<TTScalar>&, const Vector2d<TTScalar>&);
    template <typename TTScalar>
    friend Vector2d<TTScalar> operator * (const Vector2d<TTScalar>&, const Vector2d<TTScalar>&);
    template <typename TTScalar>
    friend Vector2d<TTScalar> operator * (const Vector2d<TTScalar>&, TTScalar);
    template <typename TTScalar>
    friend Vector2d<TTScalar> operator * (TTScalar, const Vector2d<TTScalar>&);
    template <typename TTScalar>
    friend Vector2d<TTScalar> operator / (const Vector2d<TTScalar>&, const Vector2d<TTScalar>&);
    template <typename TTScalar>
    friend Vector2d<TTScalar> operator / (const Vector2d<TTScalar>&, TTScalar);
    template <typename TTScalar>
    friend Vector2d<TTScalar> operator / (TTScalar, const Vector2d<TTScalar>&);
    template <typename TTScalar>
    friend TTScalar operator & (const Vector2d<TTScalar>&, const Vector2d<TTScalar>&);

    /* Accessors */

    TScalar x() const;
    Vector2d<TScalar>& x(TScalar x);

    TScalar y() const;
    Vector2d<TScalar>& y(TScalar y);

    /* Functions */

    TScalar length() const;
    TScalar lengthSq() const;
    TScalar maxLength() const;
    TScalar distanceTo(const Vector2d<TScalar>& p) const;
    TScalar distanceSqTo(const Vector2d<TScalar>& p) const;

    Vector2d<TScalar> ort() const;
    Vector2d<TScalar>& normalize();

};

/* Explicit instantiations */

template class Vector2d<float32>;
template class Vector2d<float64>;
template class Vector2d<int8>;
template class Vector2d<int16>;
template class Vector2d<int32>;
template class Vector2d<int64>;
template class Vector2d<uint8>;
template class Vector2d<uint16>;
template class Vector2d<uint32>;
template class Vector2d<uint64>;

}} // namespace reactor::algebra

#endif // REACTOR_ALGEBRA_VECTOR2D_HPP
