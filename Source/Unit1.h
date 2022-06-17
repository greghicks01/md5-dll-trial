//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include "MD5.h"
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TMd5MainFrm : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TEdit *Edit2;
        TButton *Button1;
        TEdit *Edit3;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TButton *Button2;
        TEdit *FileName;
        TOpenDialog *OpenDialog1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
        TMD5Digest * MD5 ;
public:		// User declarations
        __fastcall TMd5MainFrm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMd5MainFrm *Md5MainFrm;
//---------------------------------------------------------------------------
#endif
 