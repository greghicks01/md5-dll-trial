//---------------------------------------------------------------------------
/*
 *                     Copyright © 2007
 *                     Mr Gregory Hicks
 *
 *                 Software Project Engineer
 *                 Mr Gregory Hicks BIT CQU
 *
 *  $Revision: 1.2 $
 *
 *  $Log: MD5.h $
 *  Revision 1.2  2007/09/08 08:43:58  Administrator
 *  updated properties
 *
 *  Revision 1.1  2007/08/21 03:44:01  Administrator
 *  Initial revision
 *
 *
 *
*/


#ifndef MD5H
#define MD5H

#include <vcl.h>
//---------------------------------------------------------------------------

class EMD5Digest : public Exception
{
public:
        EMD5Digest( AnsiString message ) : Exception( message ){} ;
};       

class PACKAGE TMD5Digest : public TComponent
{
typedef TComponent Inherited ;

public:
        __fastcall TMD5Digest() throw ( EMD5Digest ) ;
        __fastcall ~TMD5Digest();
        int __fastcall HexToInt(AnsiString);
        AnsiString __fastcall MD5(AnsiString , bool = false);
private:
        typedef void ( __stdcall * TMDFile      ) ( char * fileName , char * rMD5 ) ;
        typedef void ( __stdcall * TMDStringFix ) ( char * string , int length , char * rMD5 ) ;
        TMDFile       MDFile      ;
        TMDStringFix  MDStringFix ;

        HANDLE FhDLL;
        const static AnsiString FDLLName, FDLLFile , FDLLString ;

        AnsiString FInString , FFile , FMD5Digest ;

        void __fastcall SetString ( AnsiString value ) ;
        void __fastcall SetFile   ( AnsiString value ) ;
__published:
        __property AnsiString MD5Digest = { read  = FMD5Digest } ;
        __property AnsiString String    = { read  = FMD5Digest  , write = SetString } ;
        __property AnsiString File      = { read  = FMD5Digest  , write = SetFile } ;
};
//---------------------------------------------------------------------------
#endif
