#pragma once

namespace drc
{
    class Observer
    {
        public:
            virtual void update() = 0;
            virtual ~Observer() = default;
    };
}
