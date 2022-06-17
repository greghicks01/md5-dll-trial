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
 *  $Log: MD5.cpp $
 *  Revision 1.2  2007/09/08 08:44:09  Administrator
 *  updated way to write/read MD5 string.
 *
 *  Revision 1.1  2007/08/21 03:44:54  Administrator
 *  Initial revision
 *
 *
 *
*/

#pragma hdrstop

#include "MD5.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
const AnsiString TMD5Digest::FDLLName   = "aamd532.dll" ,
                 TMD5Digest::FDLLFile   = "MDFile"      ,
                 TMD5Digest::FDLLString = "MDStringFix" ;
//---------------------------------------------------------------------------
/*
 * Purpose:
 * Accepts:
 * Returns:
*/
                
__fastcall TMD5Digest::TMD5Digest ( ) throw ( EMD5Digest ) : Inherited ( NULL )
{
        //TODO: Add your source code here
        FhDLL =  LoadLibrary ( FDLLName . c_str ( ) ) ;
        if ( FhDLL )
        {
                MDFile      = ( TMDFile )      GetProcAddress ( FhDLL , FDLLFile   . c_str ( ) ) ;
                MDStringFix = ( TMDStringFix ) GetProcAddress ( FhDLL , FDLLString . c_str ( ) ) ;
        }
        else
                throw ( EMD5Digest( FDLLName + " not found" ) ) ;

        FMD5Digest.SetLength    ( 32 ) ;
        FMD5Digest.StringOfChar ( ' ' , 32 ) ;
}
//---------------------------------------------------------------------------
/*
 * Purpose:
 * Accepts:
 * Returns:
*/

__fastcall TMD5Digest::~TMD5Digest()
{
        //TODO: Add your source code here
        FreeLibrary ( FhDLL ) ;
}
//---------------------------------------------------------------------------
/*
 * Purpose:
 * Accepts:
 * Returns:
*/

void __fastcall TMD5Digest::SetString( AnsiString value )
{
        //TODO: Add your source code here
        if(FInString != value) {
                FInString = value;
                MDStringFix ( FInString.c_str() , FInString.Length() , FMD5Digest.c_str() ) ;
        }
}
//---------------------------------------------------------------------------

void __fastcall TMD5Digest::SetFile(AnsiString value)
{
        if(FFile != value) {
                FFile = value;  \
                MDFile ( FFile.c_str() , FMD5Digest.c_str() ) ;
        }
}
//---------------------------------------------------------------------------
/*
 * Purpose:
 * Accepts:
 * Returns:
*/

int __fastcall TMD5Digest::HexToInt ( AnsiString v )
{
        //TODO: Add your source code here
        AnsiString hex = "0123456789ABCDEF" ;
        int start = 1 , stop = v.Length() ;
        v = UpperCase ( v ) ;

        while ( start < stop )
        {
                char    t     = v [ start ] ;
                v [ start++ ] = v [ stop  ] ;
                v [ stop--  ] = t ;
        }
        int rv = 0 ;
        for ( int x = 0 ; x < v.Length() ; x++ )
        {
                rv += ( hex.Pos ( v [ x + 1 ] ) - 1 ) << ( 4 * x ) ;
        }
        return rv ;
}

AnsiString __fastcall TMD5Digest::MD5( AnsiString v , bool f )
{
        //TODO: Add your source code here
        if ( ! f )
        {
                String = v ;
        }
        else
                File = v ;

        return String ;
}
