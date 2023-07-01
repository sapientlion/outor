#ifndef TESTER_HPP
#define TESTER_HPP

#include "global.hpp"

namespace Outor
{
    class Tester
    {
        public:
            /**
             * @brief			Assert whether given objects are equal or not.
             *
             * @tparam T		Expected object type.
             * @tparam U		Given object type.
             * @param x			Expected value.
             * @param y			Given value.
             * @return true		Return TRUE when objects are equal.
             * @return false	Return FALSE when objects are different.
             */
            template <typename T, typename U> static bool assertEquals(T x, U y)
            {
                if(x != y)
                {
                    std::cout << "Outor::Tester::FAIL: given objects aren't equal: " << x << " and " << y << std::endl;

                    return false;
                }

                std::cout << "Outor::Tester::SUCCESS: given objects are equal: " << x << " and " << y << std::endl;

                return true;
            }
    };
} // namespace Outor

#endif
