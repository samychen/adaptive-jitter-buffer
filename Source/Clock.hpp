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
    int master();
    int develop_cs();
<<<<<<< HEAD
    int develop2();
    int master2();
    int done();

=======
    int master2();
>>>>>>> 378ace50edbc33c6d757ca44f8e3c6311d54df74
};

}

#endif /* Clock_hpp */
