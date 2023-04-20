## VARIADIC FUNCTION

Variadic functions are functions that accepts a variable number of arguments. There's no possible way to know the number of arguments passed so developers have to find a means or way around it. To declare a variadic function you need to input at least one parameter and an elipsis to show that's it a variadic to your compiler. We then use macros found in the stdarg.h like va_list( to declare a variable), va_start(to initailize it), va_arg(to called the variable args anytieme its written), and va_end to show the end of a va_list variable. There is also va_copy to copy the symbol or object into another va_list variable.

This dir contains answers to questions asked on Variadic Function by ALX. This files include:

*
