//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMd5MainFrm *Md5MainFrm;
//---------------------------------------------------------------------------
__fastcall TMd5MainFrm::TMd5MainFrm(TComponent* Owner)
        : TForm(Owner)
{
        MD5 = new TMD5Digest ;
}
//---------------------------------------------------------------------------

void __fastcall TMd5MainFrm::Button1Click(TObject *Sender)
{
        MD5->String = Edit1->Text ;
        Edit2->Text = MD5->String ;
        Edit3->Text = IntToStr ( Edit2->Text .Length() ) ;
}
//---------------------------------------------------------------------------
void __fastcall TMd5MainFrm::Button2Click(TObject *Sender)
{
        if ( OpenDialog1->Execute() )
        {
                FileName->Text = OpenDialog1->FileName ;
                MD5->File = FileName->Text ;
                Edit2->Text = MD5->String ;
                Edit3->Text = IntToStr ( Edit2->Text .Length() ) ;
        }
}
//---------------------------------------------------------------------------

