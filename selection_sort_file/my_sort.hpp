//
// Created by tanya on 23/11/22.
//
/*
#ifndef MYFIRSTPROG_MY_SORT_HPP
#define MYFIRSTPROG_MY_SORT_HPP

#endif //MYFIRSTPROG_MY_SORT_HPP


*/
template<class CONT>
void my_selection_sort(CONT begin, CONT end) {
    for(auto i = begin; i != end; i++)
    {
        auto min = i;
        for(auto j = i; j != end; j++)
        {
            if(*j < *min)
                min = j;
        }
        auto tmp = *i;
        *i = *min;
        *min = tmp;
    }
}