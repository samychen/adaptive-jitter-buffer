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
<<<<<<< .merge_file_KYvPfk
<<<<<<< HEAD
    int develop2();
    int develop();
=======
    int master();
>>>>>>> 4387e7d... mas
=======
    int master();
>>>>>>> .merge_file_gVwIoJ
};

}

#endif /* Clock_hpp */
