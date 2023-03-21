///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/toolbar.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/frame.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/grid.h>
#include <wx/textctrl.h>
#include <wx/listbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainForm
///////////////////////////////////////////////////////////////////////////////
class MainForm : public wxFrame
{
	private:

	protected:
		wxToolBar* toolbarMainForm;
		wxToolBarToolBase* toolExpenses;
		wxToolBarToolBase* toolBudgets;
		wxToolBarToolBase* toolFunFacts;
		wxToolBarToolBase* toolSettings;
		wxToolBarToolBase* toolAbout;

		// Virtual event handlers, override them in your derived class
		virtual void evtToolExpenses_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void evtToolBudgets_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void evtToolFunFacts_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void evtToolSettings_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void evtToolAbout_Click( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainForm( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 960,540 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL, const wxString& name = wxT("Mean Lean Expense Machine") );

		~MainForm();

};

///////////////////////////////////////////////////////////////////////////////
/// Class HomePanel
///////////////////////////////////////////////////////////////////////////////
class HomePanel : public wxPanel
{
	private:

	protected:
		wxStaticBitmap* imgLogo;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;

	public:

		HomePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 960,540 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("Home") );

		~HomePanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ExpensesPanel
///////////////////////////////////////////////////////////////////////////////
class ExpensesPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxButton* btnAddExpense;
		wxGrid* grdExpenses;

		// Virtual event handlers, override them in your derived class
		virtual void evtBtnAddExpense_Click( wxCommandEvent& event ) { event.Skip(); }


	public:

		ExpensesPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 960,540 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("Expenses") );

		~ExpensesPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BudgetsPanel
///////////////////////////////////////////////////////////////////////////////
class BudgetsPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxButton* btnAddBudget;
		wxGrid* grdBudgets;

		// Virtual event handlers, override them in your derived class
		virtual void evtBtnAddBudget_Click( wxCommandEvent& event ) { event.Skip(); }


	public:

		BudgetsPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 960,540 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("Budgets") );

		~BudgetsPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class FunFactsPanel
///////////////////////////////////////////////////////////////////////////////
class FunFactsPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText7;
		wxStaticText* lblTotalMoneySpent;
		wxStaticText* m_staticText9;
		wxStaticText* lblPlaceMostSpentAt;
		wxStaticText* m_staticText11;
		wxStaticText* lblCatMostSpentAt;
		wxStaticText* m_staticText13;
		wxStaticText* lblDumbPurchaseCount;

	public:

		FunFactsPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 960,540 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("Fun Facts") );

		~FunFactsPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SettingsPanel
///////////////////////////////////////////////////////////////////////////////
class SettingsPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText16;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button3;
		wxButton* m_button4;
		wxTextCtrl* m_textCtrl2;
		wxButton* m_button5;
		wxButton* m_button6;
		wxListBox* m_listBox1;
		wxListBox* m_listBox2;

	public:

		SettingsPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 960,540 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("Settings") );

		~SettingsPanel();

};

