int AdrIO ;
static char ValIO ;

void MyFunction() 
{
__asm("mov %dx,_AdrIO") ; // loading 16 bits register
__asm("mov %al,_ValIO") ; // loading 8 bits register

/*
Don't forget the underscore _ before each global variable names !
*/
__asm("mov %dx,%ax") ; // AX --> DX
}
