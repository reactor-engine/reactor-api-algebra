#ifndef REACTOR_ALGEBRA_TRANSFORM2D_HPP
#define REACTOR_ALGEBRA_TRANSFORM2D_HPP

#include "reactor/common/type/types.hpp"
#include "reactor/algebra/Vector2d.hpp"
#include "reactor/algebra/Transform2dInside.hpp"

namespace reactor { namespace algebra {

using namespace reactor::common::type;

template <typename TScalar>
class Transform2d: protected Transform2dInside<TScalar> {

public:

    /* Constructors */

    Transform2d();

    /* Operations */

    /* Accessors */

    /* Functions */

    static Vector2d<TScalar> lerp(const Vector2d<TScalar>& a, const Vector2d<TScalar>& b, TScalar t);

};

/* Explicit instantiations */

template class Transform2d<float32>;
template class Transform2d<float64>;
template class Transform2d<int8>;
template class Transform2d<int16>;
template class Transform2d<int32>;
template class Transform2d<int64>;
template class Transform2d<uint8>;
template class Transform2d<uint16>;
template class Transform2d<uint32>;
template class Transform2d<uint64>;

}} // namespace reactor::algebra

#endif // REACTOR_ALGEBRA_TRANSFORM2D_HPP
