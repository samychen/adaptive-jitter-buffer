//
//  Clock.hpp
//  AJB
//
//  Created by Ying Wang on 17/06/16.
//  Copyright © 2016 Ying. All rights reserved.
//

#ifndef Clock_hpp
#define Clock_hpp

#include <sys/time.h>
#include <time.h>

namespace AJB {
    
class Clock
{
private:
    timeval _startTimeVal;
    timeval CurrentTimeVal() const;
    
public:
    void Start();
    long TimeInMilliseconds() const;
<<<<<<< HEAD

=======
    int develop();
>>>>>>> d874e54... no message
};

}

#endif /* Clock_hpp */
