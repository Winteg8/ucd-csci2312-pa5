//
//  less_functor.h
//  PA5
//
//  Created by Maxim Anaya on 5/8/16.
//  Copyright © 2016 Maxim Anaya. All rights reserved.
//

#ifndef less_functor_h
#define less_functor_h

namespace CS2312
{
    template<class type> class less
    {
    public:
        bool operator()(const type &rhs, const type &lhs);
    };
    
    template<> class less<std::string>
    {
    public:
        bool operator()(const std::string &rhs, const std::string &lhs);
    };
    
    template<> class less<const char *>
    {
    public:
        bool operator()(const char * rhs, const char * lhs);
    };
    
    // implementation
    template<typename type> inline bool less<type>::operator()(const type &rhs, const type &lhs)
    {
        return (rhs < lhs);
    }
    
    inline bool less<std::string>::operator()(const std::string &rhs, const std::string &lhs)
    {
        return (rhs < lhs);
    }
    
    inline bool less<const char *>::operator()(const char * rhs, const char * lhs)
    {
        string r = rhs, l = lhs;
        return (r < l);
    }

}

#endif /* less_functor_h */
