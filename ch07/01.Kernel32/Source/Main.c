#include "Types.h"

void kPrintString (int iX, int iY, const char* pcString);

void main(void)
{
    kPrintString(0,3, " C language Kernel started.");
    while (1);
    
}

void kPrintString(int iX, int iY, const char* pcString)
{
    CHARACTER* pstScreen = (CHARACTER*) 0xB8000;
    int i;
    pstScreen += (iY * 80) + iX;
    for( i= 0 ; pcString[i] != 0; i++)
    {
        pstScreen[i].bCharacter = pcString[i];
    }
}