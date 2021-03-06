//////////////////////////////////////////////////////////////////////////

#pragma once

//////////////////////////////////////////////////////////////////////////

//#define DIALOG_BK_COLOR			RGB(253, 253, 253)
//#define DIALOG_BK_COLOR			RGB(227, 239, 243)

#define DIALOG_BK_COLOR			RGB(255, 255, 255)

#define CONTROL_BORDER_COLOR	RGB(163, 186, 210)

#define DIALOG_BORDER_COLOR		RGB(211, 211, 211)
#define LINE_COLOR		                    RGB(255, 255, 255)

#define LINK_TEXT_COLOR			RGB(48, 100, 165)

//////////////////////////////////////////////////////////////////////////

#define DLG_RIGHT_OFFSET	5

//////////////////////////////////////////////////////////////////////////

#define SET_HYPER_LINK(Link, ID)	\
	Link.SetHyperLinkExtendedStyle(HLINK_COMMANDBUTTON);	\
	Link.SubclassWindow(GetDlgItem(ID));	\
	Link.m_clrLink = LINK_TEXT_COLOR;	\

#define SET_HYPER_LINK_NOT_UNDERLINE(Link, ID)	\
	Link.SetHyperLinkExtendedStyle(HLINK_NOTUNDERLINED | HLINK_COMMANDBUTTON);	\
	Link.SubclassWindow(GetDlgItem(ID));	\
	Link.m_clrLink = LINK_TEXT_COLOR;	\

//////////////////////////////////////////////////////////////////////////

class CGuiFont
{
public:
	void Init();

	void UnInit();

public:
	CFont mFont;
	CFont mBoldFont;
};

//////////////////////////////////////////////////////////////////////////

extern CGuiFont gGuiFont;

//////////////////////////////////////////////////////////////////////////