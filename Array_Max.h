/*
Auther: Samuel Kwibe
Auther or Student Id: 2278332
Auther email: Samuel.kwibe@snhu.edu
Class: Object Oriented to programing
Assignment: Teplate # 4
Descrition: This defines a template fucntion array_max that finds the maximum values in an array funtion type.
In this code i will provide some examples of integers and doubles in the main function to show how it works.
*/

#ifndef ARRAY_MAX_H
#define ARRAY_MAX_H
#include <cassert>

//This is the  Template function to find the maximum value in an array
template <typename T>
T array_max(T data[], size_t n)
{
    assert(n > 0);
    T answer = data[0];
      // This loops through the array to find the maximum value
    for (size_t i = 1; i < n; i++)
    {
        if (data[i] > answer)
        {
            answer = data[i];
        }
    }
    return answer; // this return the value of an array
}

#endif // ARRAY_MAX_H


